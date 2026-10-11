// BS 16: Find the kth missing number 

#include<bits/stdc++.h>
using namespace std;


// Brute Approach
// time complexity is O(N)
//space complexity is O(1)

int func(int arr[],int n,int k){
    for (int i=0;i<n;i++){
        if(arr[i]<=k){k++;}
        else break;
    }
}
// optimal solution 

int func2(int arr[],int n,int k)
{
int low=0;
int high=n-1;
while(low<=high){
    int mid=low+((high-low)/2);
    int missing=arr[mid]-(mid+1);
    if (missing<k)low=mid+1;
    else high=mid-1;


}
return low+k;
}






int main ()

{
   int n;
   cout<<"Enter number ";
   cin>>n;
   


   return 0;
}
