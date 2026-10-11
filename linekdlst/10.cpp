// Sort 0s , 1s and 2s 
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
// time compelexity is O(2N) and space complexity is O(1)
Node* funcBrute(Node* head){
    Node* temp=head;
    int cnt0=0;
int cnt1=0;
int cnt2=0;

while(temp!=NULL){
    if(temp->data=0){cnt0++;}
    else if(temp->data=1){cnt1++;}
    else cnt2++;

    temp=temp->next;

}

// now we will put first o and then 1 and then 2 according to the number of 0s 1s and 2s in cnt0 , cnt1 and cnt2

Node* temp=head;
while(temp!=NULL){
    if(cnt0){temp->data=0;
    cnt0--;}
    else if(cnt1){temp->data=1;
    cnt1--;}
    else {
        temp->data=2;
        cnt2--;
    }
    temp=temp->next;}
}


// Optimal Solution : 
// by rearranging links : 
// time complexity is O(N) and space complexity is O(1)
Node* func(Node* head ){
    if(head==NULL || head->next==NULL) {return head;}
   Node* zeroHead=new Node(-1); Node* zero=zeroHead;
   Node* oneHead=new Node(-1);  Node* one=oneHead;
   Node* twoHead=new Node(-1);  Node* two=twoHead;

   Node* temp=head;

   while(temp!=NULL){
    /// first connect 0s to all zeros and zeroHead to all zeros 

    if(temp->data==0){
        zero->next=temp;
        zero=temp;
    }

    else if(temp->data==1){
        one->next=temp;
        one =temp;
    }
    else {
        two->next=temp;
        two=temp;
    }
    temp=temp->next;
   }

   // Till now all 0s are connected to 0 and all 1s are connected to 1s and all 2s 
   // now its time to connect  0s to 1s and then 1s to 2s
    zero->next=(oneHead->next)?oneHead->next:twoHead->next;

    one->next=twoHead->next;

    two->next=NULL;

    Node* newHead=zeroHead->next;
     
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return newHead;

}

















int main(){
 vector<int> arr={12,5,8,7};
 Node* head=convertArr2Dll(arr);
 cout<<head;




return 0;

}