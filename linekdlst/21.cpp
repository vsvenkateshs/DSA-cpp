//finding node in the loop of a linked list 


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
// Time complexity is O(2N) and space complexity is O(N)

// during traversal if we reach it two times then iw will be the starting point of the loop


Node* func(Node* head){
    map<Node*, int> mpp;
    Node* temp=head;
    while(temp!=NULL){
        if(mpp.find(temp)!=mpp.end()){
            return temp;
        }
        mpp[temp]=1;
        temp=temp->next;
    }
    return NULL;


}


// optimal solution : by using tortoise and hare method // by using fast and slow 
// time complexity is O(N/2)
// space complexity is O(1)

// we will skip  one step of slow so as to reach at one before the middle 
Node* func2(Node* head )
{

    // first detect a loop and then find the starting point of the loop and // then move slow and fast simulataneously

    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next==NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            slow=head;
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            }
            return slow;
        }


        
    }
    return NULL;

}



int main(){
 vector<int> arr={12,5,8,7};
 Node* head=convertArr2Dll(arr);
 cout<<head;




return 0;

}