// BS 11: Find the Nthroot of a number M.

#include<bits/stdc++.h>
using namespace std;
 
//Brute approach :
// by linear search
int funcn(int i, int n){
    int ans=i;
    for (int j=i;j<n;j++)
    {
        ans=ans*i;
    }}

int func(int n,int m){

    for (int i=1;i<m;i++)
    {
        if (funcn(i,n)==m){
            return i;
        }
        else if (funcn(i,n)>m){
         break;
        }
    }
}


// Optimal Approach : Binary Search on ans

// this is a function for a finding sqaure of a number 
// return 1 , if it is ==m
//  return 0 , if it is <m
// return 2  , if it is >m 
  int func2(int mid ,int m,int n){
  long long ans=1;
  for (int i=0;i<n;i++)
  {
    int ans=ans*mid;
    if (ans>m) {return 2;}
    if (ans==m) {return 1;}
  }
    return 0;
  }

  // optimal function
  int NthRootOptimal(int n,int m){
    int low=1;
    int high=m;
    while(low<=high){
        int mid=low+((high-low)/2);
        int midN=func2(mid,n,m);
        if (midN==1){return mid;}
        else if(midN==0)low=mid+1;
        else high=mid-1;
    }
    return -1;
  }

 
   
  
int main ()
{
   int n;
   cout<<"Enter number ";
   cin>>n;
   int m;
   cout<<"Enter m ";
   cin>>m;

   
   cout<<NthRootOptimal(n,m);

   return 0;
}
