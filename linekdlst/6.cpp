//Deletion in Doubly Linked list


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

// deletion at head 

Node* deleteAtHead(Node* head)
{
     if(head == NULL) return NULL;
    Node* temp=head;
    temp->next->prev=nullptr;
    head=temp->next;
    temp->next=nullptr;
    delete temp;

    return head;
}


// delete at end 
Node* deleteAtTail(Node* head){
    if(head == NULL) return NULL;
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;

    }
    temp->prev->next=nullptr;
    temp->prev=nullptr;
    delete temp;
    return head;

}

//delete at some kth position 

Node* deleteAt_K_Position(Node* head, int k){
    if (head==NULL){return NULL;}
    if(k==1){
    Node* temp=head;
    head=temp->next;
    if(head!=NULL){
        head->prev=nullptr;
    }
    temp->next=nullptr;
    delete temp;

    return head;


    }
    int cnt=1;
    Node* temp=head;
    Node* prev1=NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            

    // connect previous node to next node
    prev1->next = temp->next;
    //connect next node back to previous node

    if(temp->next !=NULL){
        temp->next->prev=prev1;
    }
    temp->next=nullptr;
    temp->prev=nullptr;

          
          
            delete temp;
            break;
            
        }
       prev1=temp;
       temp=temp->next;

    }
    return head;



}



// deletion of a value 



Node* deleteAtValue(Node* head, int val){
    if (head==NULL){return NULL;}
    if(val==head->data){  Node* temp=head;
    head=temp->next;
    if(head!=NULL){
        head->prev=nullptr;
    }
    temp->next=nullptr;
    delete temp;

    return head;


    }

    Node* temp=head;
    Node* prev1=NULL;
    while(temp!=NULL){
        if(val==temp->data){
            prev1->next=temp->next;

            if (temp->next!=NULL){
                temp->next->prev=prev1;
            }
             temp->next=nullptr;
    temp->prev=nullptr;
            delete temp;
            break;
            
        }
       prev1=temp;
       temp=temp->next;

    }
    return head;}

int main(){
 vector<int> arr={12,5,8,7};
 Node* head=convertArr2Dll(arr);
 cout<<head;




return 0;

}