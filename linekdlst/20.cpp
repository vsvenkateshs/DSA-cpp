//delete the middle node of a linked list 


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
// Time complexity is O(2N) and space complexity is O(1)

// first find the length of the linked list and then find N/2


bool func(Node* head){
 if(head==NULL && head->next==NULL){
    return NULL;
 }
    Node* temp=head;
    int n=0;


    while(temp!=NULL){
        n++;
        temp=temp->next;}
        int res=n/2;
        temp=head;

    while(temp!=NULL){
        res--;
        if(res==0){
            Node* middle=temp->next;
            temp->next=temp->next->next;
            delete middle;
            break;
        }
        temp=temp->next;
    }


}


// optimal solution : by using tortoise and hare method // by using fast and slow 
// time complexity is O(N/2)
// space complexity is O(1)

// we will skip  one step of slow so as to reach at one before the middle 
Node* func2(Node* head )
{
    if (head==NULL && head->next==NULL){return NULL;}

    Node* slow=head;
    Node* fast=head;

    fast=fast->next->next;

    while(fast!=NULL && fast->next!=NULL ){
        slow=slow->next;
        fast=fast->next->next;

    }
    Node* middleNode=slow->next;
    slow->next=slow->next->next;
    delete middleNode;

    return head;

}

int main(){
 vector<int> arr={12,5,8,7};
 Node* head=convertArr2Dll(arr);
 cout<<head;




return 0;

}