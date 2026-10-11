// Remove nth node from end;
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
// time complexity is O(2* length ) and space complexity is O(1)
Node* funcBrute(Node* head,int n){
     Node* temp=head;
     int cnt=0;

     // first we will count the number of members of linked list 

     while(temp!=NULL){
        cnt++; temp=temp->next;
        
     }
     // what if N is equals to number of element then we will have to delete the head .so this is for edge cases:
     if(cnt==n){Node* newHead=head->next;
             delete head;
             return newHead;
     }
  int res=cnt-n; temp=head;

  while(temp!=NULL){
    res--;

    if(res==0){break;}
    temp=temp->next;}

    Node* deleteNode=temp->next;
    temp->next=temp->next->next;
    delete deleteNode;

    return head;
    




}


// optimal solution : 
// time complexity is O(len) and space complexity is O(1)

Node* func2(Node* head, int n){
    Node* fast=head;
    for(int i=0;i<n;i++){
        fast=fast->next;
    }
    Node* slow=head;

    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;


    }
    // what is n is equal to number of elements then : 
    if (fast==NULL){
        return head->next;
        delete head;
    }
    Node* deleteNode=slow->next;
    slow->next=slow->next->next;

    delete deleteNode;

    return head;
}
















// Optimal Solution : 
// by rearranging links : 
// time complexity is O(N) and space complexity is O(1)
















int main(){
 vector<int> arr={12,5,8,7};
 Node* head=convertArr2Dll(arr);
 cout<<head;




return 0;

}