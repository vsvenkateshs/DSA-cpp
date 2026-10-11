// BS 10: Find Sqaure root of a number

#include<bits/stdc++.h>
using namespace std;
 
//Brute approach :
// by linear search
int func(int n){
    int ans=1;
    for (int i=0;i<n;i++)
    {
       if ((i*i)<=n)
       {
        ans=i;
       }
       else break;}}


  int func2(int n){
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=low+((high-low)/2);
        if ((mid*mid)<=n){
            ans=mid;
            low=mid+1;
        }
        else {high =mid-1;}
    }
    return high;
  }     
int main ()
{
   int n;
   cout<<"Enter number ";
   cin>>n;
   
   cout<<func(n);

   return 0;
}
