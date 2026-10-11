//Merge two sorted linked list :


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

// BRUTE Approach : Put all the elements in a sorted order in an arrays:


Node* func(Node* head1,Node* head2){
    vector<int>arr;
    Node* temp1=head1;
    Node* temp2=head2;

    while(temp1!=NULL){
        arr.push_back(temp2->data);
        temp1=temp1->next;
    }
    while(temp2!=NULL){
        arr.push_back(temp2->data);
        temp2=temp2->next;
    }
sort(arr.begin(),arr.end());

Node* head=convertArr2Dll(arr);

return head;
}





Node* func2(Node* head1,Node* head2)
{
    Node* t1=head1;
    Node* t2=head2;

    Node* dummyNode=new Node(-1);
    Node* temp=dummyNode;
    while(t1!=NULL && t2!=NULL){
        if(t1->data<t2->data){
            temp->next=t1;
            temp=t1;
            t1=t1->next;
        }
        else {
            temp->next=t2;
            temp=t2;
            t2=t2->next;
        }
        if(t1){ temp->next=t1;
            temp=t1;

        }
        else {temp->next=t2;
        temp=t2;
    }
    return dummyNode->next;
}
}


int main(){
 vector<int> arr={12,5,8,7};
 Node* head=convertArr2Dll(arr);
 cout<<head;




return 0;

} 