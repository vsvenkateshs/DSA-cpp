//Find the intersection of the Y linked list : 


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
// By hashing :


Node* func(Node* head){
    map<Node* ,int> mpp;
    Node* temp=head;

    while(temp!=NULL){
        mpp[temp]=1;
        temp=temp->next;
    }

    Node* temp=head;

    while(temp!=NULL){
        if(mpp.find(temp)==1){
            return temp;
        }
        return NULL;
    }






}














// optimal solution : 
// time complexity is O(len) and space complexity is O(1)

// time complexity is O(N) and space complexity is O(N)



// defining helper function
int helperFunc(Node* temp){
    if(temp==NULL ){return 1;}
    int carry=helperFunc(temp->next);
    temp->data=temp->data+carry;

    if(temp->data<10){
        return 0;
    }
    temp->data=0;
    return 1;

    
}



Node* func2(Node* head){
    int carry=helperFunc(head);

    if(carry=1){
        Node* newNode=new Node(1);
        newNode->next=head;
        return newNode;
    }
   return  head;

    
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