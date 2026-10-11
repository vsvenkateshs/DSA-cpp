//find the length of a linked list in a loop 

// if there is atleast one node such that we can start and reach there back then that is a loop in a linked list 


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
// if there is a atleast one node such that we can start it from and reach at end then that is loop 


// by using hashing 
// time complexity is O(2N log(n))
// space complexity is O(N)


bool func(Node* head){
    map<Node*,int>mpp;
   Node* temp=head;
   int timer=1;
   while(temp!=NULL){
    if(mpp.find(temp)!=mpp.end()){
       int value=mpp[temp];
        return timer-value;
    }
mpp[temp]=1;
timer++;
temp=temp->next;

   }

   return false;


}


// optimal solution : by using tortoise and hare method // by using fast and slow 
// time complexity is O(N) --> it may vary
// space complexity is O(1)


int findLength(Node*slow , Node* fast){
    int cnt=1;
    fast=fast->next;
    while(slow!=fast){
        cnt++;
        fast=fast->next;
    }
    return cnt;
}

bool func2(Node* head )
{
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
    fast=fast->next->next;

if (slow==fast){return findLength(slow,fast);}

    }
    return false;

}

int main(){
 vector<int> arr={12,5,8,7};
 Node* head=convertArr2Dll(arr);
 cout<<head;




return 0;

}