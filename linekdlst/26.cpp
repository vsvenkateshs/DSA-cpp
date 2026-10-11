//Rotate a doubly linked list : 

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

Node* findNthNode(Node* head,int k){
    int cnt=1;

    Node* temp=head;

    while(temp!=NULL){
        if(cnt==k) return temp;
        cnt++;
        temp=temp->next;


    }
    return temp;


}

Node* func(Node* head,int k){
    int len=1;
    Node* tail=head;

    while(tail->next!=NULL){
        len++;
        tail=tail->next;
    }
    if(k%len==0){
        return head;
    }

    k=k%len;

    tail->next=head;

    Node* newLastNode=findNthNode(head,len-k);
    head=newLastNode->next;
    
    newLastNode->next=NULL;

    return head;
  

}

int main(){
 vector<int> arr={12,5,8,7};
 Node* head=convertArr2Dll(arr);
 cout<<head;




return 0;

} 