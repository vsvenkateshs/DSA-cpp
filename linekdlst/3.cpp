// Deletion in a single linked list : 
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


//deletion at head 
Node* deleteHead(Node* head){
    if(head=NULL){ return head;}

    Node* temp=head;
    head=head->next;
    free(temp);

    return head;
}

// deletion at end / tail 

Node* deleteTail(Node* head){
    if ( head==NULL || head->next==NULL){return NULL;}
     Node* temp=head;
     while(temp->next->next!=NULL){
        temp=temp->next;
     }
     free(temp->next);
     temp->next=NULL;
     return head;

}
// deletion at kth element : 

Node* deleteK(Node* head, int k){
    if(head==NULL) return head;
    if(k==1){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    int cnt=1;
    Node* temp=head;
    Node* prev=NULL;

    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
return head;
}



// deletion of a element at given value  : 

Node* deleteOfValue(Node* head, int val){
    if(head==NULL) return head;
    if(val==head->data){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    Node* temp=head;
    Node* prev=NULL;

    while(temp!=NULL){
        if(val==temp->data){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
return head;
}

int main (){
    vector<int> arr={2,5,8,7};
    Node* head=convertArr2Ll(arr);
    //head=deleteHead(head);
    //cout<<head;
    head=deleteTail(head);



}
