//Reverse a Doubly Linked list


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

// reverse a Doubly linked list 
//Method1 : by using stack data structure 
// time complexity : O(2n)
// space complexity : O(N)

Node* reverseByUsingStack(Node* head ){
    stack<int> st;
    Node* temp=head;
    while(temp!=NULL){
        st.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        temp->data=st.top();
        st.pop();
        temp=temp->next; }
 return temp;
}




// reverse a doubly linked list by optimal approach 

Node* reverseByUsingStack(Node* head ){

Node* last=NULL;
Node* current=head;
while(current!=NULL)
{
    last=current->prev;
    current->prev=current->next;
    current->next=last;
    current=current->prev;


}
return last->prev;




}













int main(){
 vector<int> arr={12,5,8,7};
 Node* head=convertArr2Dll(arr);
 cout<<head;




return 0;

}