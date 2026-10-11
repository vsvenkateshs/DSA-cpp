// BS 7: Find how many time an arrays has been rotated 


#include<bits/stdc++.h>
using namespace std;
 //fini it is same as searching index for minimum element

// Time compelxity is O(log2N)

int func(int arr[],int n,int key)
{ int low=0;
    int high=n-1;
    int ans =INT_MAX;

    while(low<=high){
        int mid=low+((high-low)/2);
        if (arr[low]<=arr[high]){
            ans=min(low,ans);
        }
        //left part is sorted 
        if (arr[low]<=arr[mid]){
            ans=min(low,ans);
            low=mid+1;   // this is for searching in lower right part of arrays 

        }
        // right part is sorted 
        else {
              ans=min(mid,ans);
              high=mid-1;
        }
    
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
   cout<<"enter key elemetns to search in rotated arrays ";
   cin>>key;

   cout<<func(arr,n,key);

  



    return 0;
}
