// Binary Search : applicable for sorted arrays 

#include<bits/stdc++.h>
using namespace std;
 

// Time compelxity is O(logN)
int func(int arr[],int n,int key)
{ int low=0;
    int high=n-1;
while(low<=high)
{
    int mid=low+((high-low)/2);
    if (arr[mid]==key) return mid;
    else if (arr[mid]<key) low=mid+1;
    else high=mid-1;}
return -1;
}


// by using recursive approach :: time complexity is O(log2N)

int func2(int arr[],int low,int high,int key)
{
if (low>high) return -1;

int mid=low+((high-low)/2);

if (arr[mid]==key)return mid ;
else if (arr[mid]<key) return func2(arr,mid+1,high,key); //right side 
else return func2(arr,low,mid-1,key);  //left side 
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
   cout<<"enter key eleemtns to search in arrays";
   cin>>key;

  // cout<<"key element is at index "<<func(arr,n,key);
    cout<<"key element is at index "<<func2(arr,0,n,key);



    return 0;
}
