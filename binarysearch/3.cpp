//Search insert position of an element in an arrays : This is same as finding lower bound for a arrays


#include<bits/stdc++.h>
using namespace std;
 

// Time compelxity is O(logN)
int func(int arr[],int n,int key)
{ 
    int low=0;
    int high=n-1;
    int ans=0;
while(low<=high)
{
    int mid=low+((high-low)/2);
    if (arr[mid]>=key) {
        ans=mid;
     high=mid-1;}

     else {low=mid+1;}

}
return ans;


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
   int key;
   cout<<"enter key elements to insert in arrays";
   cin>>key;

   cout<<"of key element is at index "<<func(arr,n,key);
  return 0;

}
