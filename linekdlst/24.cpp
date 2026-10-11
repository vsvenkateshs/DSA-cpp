//Find pairs with the given sum in a sorted linked list


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


//brute force : time complexity is O(N*2) and space complexity is O(1) 

Node* func(Node* head, int sum){
    Node* temp1=head;
    vector<int,int> ds;
    Node* temp2=NULL;
    while(temp1!=NULL){
       Node* temp2=temp1->next;

       while(temp2!=NULL && temp1->data+temp2->data<=sum)
       {
        if(temp1->data+temp2->data==sum){
            vector.push(temp1->data,temp2->data);

        }
        temp2=temp2->next;
       }
    }

    
}



// optimal approach : 
// t.C->O(2N)
// S.C-> O(1)

Node* findTail(Node* head){
    while(head->next!=NULL){
        head=head->next;
    }
    return head;
}

Node* func(Node* head, int sum){
    Node* left=head;        // left 
    Node* right=findTail(head); // tail
    vector<int,int> ds;

    while(left->data <right->data){
        if(left->data+right->data==sum){
            ds.push_back(left,right);
            left=left->next;
            right=right->next;


        }
        else if(left->data+right->data<sum){
            left=left->next;
        }
        else {
            right=right->next;
        }
    }
    return ds;


}


int main(){
 vector<int> arr={12,5,8,7};
 Node* head=convertArr2Dll(arr);
 cout<<head;




return 0;

}