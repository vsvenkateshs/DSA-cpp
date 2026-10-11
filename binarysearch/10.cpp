// BS8: Finding single element in Sorted arrays 
//e.g arr=[1 1 2 2 3 3 4 5 5 6 6] --> Single element is 4

#include<bits/stdc++.h>
using namespace std;
 
//Brute approach : By linear search :O(N)
int func(int arr[],int n){
    if (n==1)return arr[0];

    for (int i=0;i<n;i++){
        if (i==0) {if (arr[i]!=arr[i+1])return arr[i];}
        if (i==n-1){ if (arr[i]!=arr[i-1]); return arr[i];}
        else if (arr[i]!=arr[i+1] && arr[i]!=arr[i-1]){
            return arr[i];
        }


    }
    return -1;

}


// optimal solution : by binary Search
//(even,odd)--> Element is on right half // even index==odd index then 
//(odd,even)--> element is on left half  // odd index==even index then 

int func2(int arr[],int n){
    if(n==1) return arr[0];
    if (arr[0]!=arr[1]) return arr[0];
    if (arr[n-1]!=arr[n-2]) return arr[n-1];
    int low=1;
    int high=n-2;
    while(low<=high){
        int mid=low+((high-low)/2);
        if (arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
            return arr[mid];
        }
        // if element is on right half so eliminate left half 
        if ((((mid%2)==1) && arr[mid]==arr[mid-1] )|| (mid%2==0) && arr[mid]==arr[mid+1]  ) {
             
       low=mid+1;

        }
        else high=mid-1;
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
  
   cout<<func(arr,n);
     cout<<func2(arr,n);

   return 0;
}
