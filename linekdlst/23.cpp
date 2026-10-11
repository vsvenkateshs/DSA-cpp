//Doubly Linked list: Delete all the occurrence of a key in the linked list 


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


// Time Complexity is O(N) and space complexity is O(1)
Node* func(Node* head, int key){

    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            if(temp==head){
                head=head->next;
            }
            Node* nextNode=temp->next;
            Node* prevNode=temp->next;

            if(nextNode) {nextNode->prev=prevNode;}
            if(prevNode){prevNode->next=nextNode;}

            delete temp;

        }

        else {temp=temp->next;}
    }
    return head;
    
}

int main(){
 vector<int> arr={12,5,8,7};
 Node* head=convertArr2Dll(arr);
 cout<<head;




return 0;

}