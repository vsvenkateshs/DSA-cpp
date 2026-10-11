// Search in rotated array : Unique elements 

#include<bits/stdc++.h>
using namespace std;
 
//Brute approach : By linear search :O(N)


// By Binary search :Identify the sorted arrays - either it will be left sorted or right sorted 
//if low<mid --> then left part of arrays is sorted otherwise right part is sorted 

// Time compelxity is O(log2N)
int func(int arr[],int n,int key)
{ int low=0;
    int high=n-1;
    while(low<=high)
    {  int mid=low+(high-low)/2;
        if (arr[mid]==key){
            return mid;

        }
        //if left is sorted 
        if (arr[low]<=arr[mid]){
        if (arr[low]<=key && key<=arr[mid]){
         high=mid-1;
        }  
        else low=mid+1;
    }
    //if right part is sorted
     else {
      if (arr[mid]<=key && key<=arr[high])
      {
        low=mid+1;}

        else high=mid-1; }
}
   return -1;
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
   cout<<"enter key elemetns to search in rotated arrays ";
   cin>>key;

   cout<<func(arr,n,key);

  



    return 0;
}
