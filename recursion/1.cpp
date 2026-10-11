//recursion
#include<bits/stdc++.h>
using namespace std;
void rec1(int count){
    if (count==4)
    {
        return;
    }
count++;
    cout<<count<<endl;
    rec1(count);

}
void printNames(int i,int n){
    if (i>n){
        return;
    }
    cout<<"raj "<<endl;
    printNames(i+1,n);
}

void printN(int i,int n){
    if (i>n){
        return;
    }
    cout<<i<<endl;
    printN(i+1,n);
}

void printrevN(int i){
    if (i==0){
        return;
    }
    cout<<i<<endl;
    printrevN(i-1);
}
// by backtracing 1 to N
void printbackN(int i, int n){
    if (i<1){
        return;}
    printbackN(i-1,n);
    cout<<i<<endl;
}
// by backtracing N to 1
void printrevbackN(int i, int n){
    if (i>n){
        return;}
    printrevbackN(i+1,n);
    cout<<i<<endl;
}


int main ()
{
    int count=0;
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
int i=1;
   // rec1(count);
  // printNames(1,3);
   //printN(n,n);
   //printrevN(i);
   //printbackN(n,n);
   printrevbackN(i,n);

    return 0;

}
