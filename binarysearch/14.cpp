// BS 13: koko eating bananas 
// in arrays no of bananas is given then we have to find minimum integer k such that koko can eat all bananas within h hours 




#include<bits/stdc++.h>
using namespace std;
 
// function which tells required time to eat bananas 

int func(int arr[],int n,int h){
    int totalHr=0;
    for (int i=0;i<n;i++){
        totalHr+=ceil(arr[i]/h);
    }
    return totalHr;

}
// brute solution :
//Time complexity is O(max element )*O(N)


int func(int arr[],int n, int h)
{
    for(int i=1;i<maxi;i++)
    {
        int reqTime=func(arr,n,i);
        if (reqTime<=h){
            return i;
        }
    }
    return -1;
}

// T.C-> O(N)*O(log2(max element))
 //optimal solution for this by binary search : 

    int bs(int arr[],int n,int h){
        int low=1;
        int high=maxi;
        int ans=INT_MAX;
        while(low<=high){
            int mid=low+((high-low)/2);
           int totalHrs=func(arr,n,mid);
           if (totalHrs<=h){
            ans=mid;
            high=mid-1;

           }
           else low=mid+1;
        }
    }






int main ()

{
   int n;
   cout<<"Enter number ";
   cin>>n;
   


   return 0;
}
