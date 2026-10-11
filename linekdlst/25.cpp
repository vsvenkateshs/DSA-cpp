//Removes duplicates from a sorted doubly linked list : 



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

// time complexity is O(N) and space complexity is O(1)

Node* func(Node* head, int sum){
    Node* temp=head;
    Node* nextNode=NULL;
    while(temp!=NULL && temp->next!=NULL){
        Node* nextNode=temp->next;
        while(nextNode!=NULL && nextNode->data==temp->data){
            Node* duplicate=nextNode;
            nextNode=nextNode->next;
            delete duplicate;
        }

        temp->next=nextNode;
        if(nextNode) {nextNode->prev=temp;}
        temp=temp->next;}
        return head;
  

}


int main(){
 vector<int> arr={12,5,8,7};
 Node* head=convertArr2Dll(arr);
 cout<<head;




return 0;

} 