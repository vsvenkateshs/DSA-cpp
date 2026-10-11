//Add 1 to linked list : 

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
// time complexity is O(2* length ) and space complexity is O(1)
Node* funcBrute(Node* head,int n){

    Node* head=reverse(head);
    Node* temp=head;
    int carry=1;


    while(temp!=NULL){
        temp->data=temp->data+carry;


     if(temp->data<10){
        carry=0;
        break;
     }
     else {
        temp->data=0;
        carry=1;

     }
     temp=temp->next;
    }


  if (carry=1){
    Node* newNode=new Node(1);
    head=reverse(head);
    newNode->next=head;

    return newNode;
  }


  head=reverse(head);

  return head;




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