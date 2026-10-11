//BS23:Search in a 2D's matrix

#include<bits/stdc++.h>
using namespace std;
int func(int arr[][100],int m,int n, int target){
    for(int i=0;i<n;i++){
   for (int j=0;j<m;j++){
    if(arr[i][j]==target){
        return 1;
    }





    }
return 0;
}
//O(N)+O(logM)
int func(int arr[][100], int m , int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i][0]<=target && target <=arr[i][n-1]){
            return bS(arr[i],n,target);
        }
    }
}
// flattens 2D into 1D arrays

int funcOptimal(int arr[], int n,int m,int target){
    int low=0;
    int high=n=m*n-1;
    while(low<=high){
        int mid=low+((high-low)/2);
        int low=mid/m;
        int col=mid%m;
        if(arr[row][col]==target) return true;
        else if (arr[low][col]<target) {low=mid+1;}
        else high=mid-1;

    }
    return false;
}
//T.C--> O(LogM)
//S.C--> O(1)


int main ()

{
   int n;
   cout<<"Enter number ";
   cin>>n;
   


   return 0;
}
