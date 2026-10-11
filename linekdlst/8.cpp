// Adding two numbers in a single linked list 



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

// function to add two linked list numbers : 

// Time complexity : O(max(n1,n2))
//Space complexity ; O(max(n1,n2))


Node* func(Node* head1,Node* head2 ){
    Node* t1=head1;
    Node* t2=head2;
    Node* dummyNode=new Node(-1);
    Node* current=dummyNode;
    int sum=0;
    int carry=0;

    while(t1!=NULL || t2!=NULL){
        sum=carry;
        if (t1)sum=sum+t1->data;
        if (t2)sum=sum+t2->data;
        Node* newNode=new Node(sum%10);
        carry=sum/10;

        current->next=newNode;
        current=current->next;

        if(t1) t1=t1->next;
        if(t2) t2=t2->next;


        // for left over carry 

        newNode=new Node(carry);
        current->next=newNode;

    }

    return dummyNode->next;

    

}





int main(){
 vector<int> arr={12,5,8,7};
 Node* head=convertArr2Dll(arr);
 cout<<head;




return 0;

}