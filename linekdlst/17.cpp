//Finding the middle of the linked list: 

#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
    
    Node(int data1,Node* next1,Node* prev1){
        data=data1;
        next=next1;
        prev=prev1;}

     Node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;

     }   
};

Node* convertArr2Dll(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;

    for (int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;  //    

        
    }
    return head;
}

void print(Node* head){
    while(head !=NULL){
        cout<<head->data<< " ";
        head=head->next;

    }
}


// brute force approach : 
// first take a count of all elements of linked list and then find midNode=N/2+1

// time complexity is O(N+N/2)
// space complexity is O(1)


Node* func(Node* head){

    Node* temp=head;
    int cnt=0;

    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    int midNode=((cnt/2)+1);
    temp=head;

    while(temp!=NULL){
        midNode=midNode-1;
        if(midNode==0) break;
        temp=temp->next;

    }
    return temp;



}


// optimal solution : by using tortoise and hare method // by using fast and slow 
// time complexity is O(N/2)
// space complexity is O(1)

Node* func(Node* head )
{
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
    fast=fast->next->next;

    }
    return slow;

}

int main(){
 vector<int> arr={12,5,8,7};
 Node* head=convertArr2Dll(arr);
 cout<<head;




return 0;

}