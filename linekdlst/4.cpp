//Insertion in a single linked list : 
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    
    Node(int data1,Node* next1){
        data=data1;
        next=next1; }};


Node* convertArr2Ll(vector<int> &arr){
    Node* head=new Node(arr[0],NULL);
    Node* mover=head;

    for (int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],NULL);
        mover->next=temp;
        mover=temp;  // mover=mover->next;    
    }
    return head;}


//Insertion at head 
Node* insertAtHead(Node* head){

    Node* temp=new Node(10,head);
    
    return temp;
}

// Insertion at end / tail 

Node* InsertAtTail(Node* head,int val){
    if ( head==NULL){return new Node(val,nullptr);}
     Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newNode=new Node(val);
    temp->next=newNode;
     return head;

}

 // Insert at Kth position: 


 Node* func(Node* head,int k,int val){
    if(k==1){  Node* temp=new Node(val, head);
        head=temp;
        return head;
    }
    if(head==NULL){
        Node* temp=new Node(val,NULL);
         return temp;
}

    Node* temp=head;
    int cnt=1;

    while(temp!=NULL){
        cnt++;
        if(cnt==k-1){
            Node* newNode=new Node(val,NULL);
            newNode->next=temp->next;
            temp->next=newNode;
            break;


        }
        temp=temp->next;}
        return head;
    
 }

 // insert at some value 

 Node* func(Node* head,int value,int val){
     if(head==NULL){
        Node* temp=new Node(val,NULL);
         return temp;
}

    if(head->data==value){  Node* temp=new Node(val, head);
        head=temp;
        return head;
    }
   

    Node* temp=head;
    Node* prev=NULL;
  while(temp!=NULL){
    if(temp->data==value){
        Node* newNode=new Node(val,temp);
        prev->next=newNode;
        break;
            

    }

    prev=temp;
    temp=temp->next;
    
  }

        return head;
    }

