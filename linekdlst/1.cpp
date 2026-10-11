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
int main(){
Node* y=new Node(10,NULL);
cout<<y->data;
cout<<y->next;

Node y2=Node(20,NULL);

cout<<y2.data;
cout<<y2.next;

return 0;

}