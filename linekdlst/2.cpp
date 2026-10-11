// converting an array to linked list 

#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    
    Node(int data1,Node* next1){
        data=data1;
        next=next1;


    }
};

Node* convertArr2Ll(vector<int> &arr){
    Node* head=new Node(arr[0],NULL);
    Node* mover=head;

    for (int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],NULL);
        mover->next=temp;
        mover=temp;  // mover=mover->next;
    

        
    }
    return head;


}


//finding length of a linked list 

int lengthOfLL(Node* head ){
    Node* temp=head;
    int cnt=0;
    while(temp){
        cnt++;
        temp=temp->next;
    }
return cnt;
}


// search for an element if it is present 

int checkIfPresent(Node* head, int value){
    Node* temp=head;
    while(temp){
    if (temp->data==value){ return 1;}
    temp=temp->next;}

    return 0;

}


int main (){
    vector<int> arr={2,5,8,12};
    Node* head=convertArr2Ll(arr);
    cout<<head->data;
 //  cout<<lengthOfLL(head);
   cout<<checkIfPresent(head,8);
}


// traversal in a linked list 

void traversal(Node* head){
Node* temp=head;
while(temp){
    cout<<temp->data<<endl;
    temp=temp->next;
}

}

