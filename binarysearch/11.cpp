// BS 9 : Find peak element 

#include<bits/stdc++.h>
using namespace std;
 
//Brute approach :
//  By linear search :O(N)
// space complexity is O(1)
int func(int arr[],int n){
    for (int i=0;i<n;i++)
{
    if (((i==0) || arr[i-1]<arr[i]) && (i==n-1) || arr[i]>arr[i+1])
    {
     return i;
    }
}}



// optimal solution : by binary Search
//(even,odd)--> Element is on right half // even index==odd index then 
//(odd,even)--> element is on left half  // odd index==even index then 

int func2(int arr[],int n){
    if (n==1) return arr[0];
    if (arr[0]>arr[1]){return arr[1];}
   if (arr[n-1]>arr[n-2]){ return n-1;}
   int low=1;
   int high=n-2;

   while(low<=high){
    int mid=low+((high-low)/2);
    if (arr[mid]>arr[mid-1]&& arr[mid]>arr[mid+1])
    {
        return mid;
    }
    else if (arr[mid]>arr[mid-1]){
        low=mid+1;
    }
    else high=mid-1;

   }

}
int main ()
{
   int n;
   cout<<"Enter number of elements of array";
   cin>>n;
   int arr[n];
cout<<"enter all the values of array";
   for (int i=0;i<n;i++){
    cin>>arr[i];

   }
  
   cout<<func(arr,n);

   return 0;
}
