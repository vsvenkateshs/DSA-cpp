// Odd and even linked list 

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


Node* oddEvenBrute(Node* head){
    if (head=NULL || head->next=NULL){ return head;}
    Node* temp=head;
    int arr[]={};
    while(temp!=NULL && temp->next!=NULL){
        arr[].push_back(temp->data);
        temp=temp->next->next;
    }

    if (temp) arr.push_back(temp->data);
    temp=head->next;

while(temp!=NULL && temp->next!=NULL){
        arr[].push_back(temp->data);
        temp=temp->next->next;
    }

    if (temp) arr.push_back(temp->data);

    int i=0; temp=head;

 while(temp!=NULL){
    temp->data=arr[i];i++;
    temp=temp->next;

 }
 return head;
}

















int main(){
 vector<int> arr={12,5,8,7};
 Node* head=convertArr2Dll(arr);
 cout<<head;




return 0;

}