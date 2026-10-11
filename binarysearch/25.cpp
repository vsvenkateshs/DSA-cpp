//BS24:Search in a 2D's matrix PartII

#include<bits/stdc++.h>
using namespace std;

//T.C--> O(N*logM)

pair<int,int> func(int arr[][100],int m,int n,int target){
    for(int i=0;i<n;i++){
        int index=bS(arr[i],target);
        if(index!=-1) return {i,index};}

        return {-1,-1};


    }

    // optimal solution

    pair<int,int> func2(int arr[][100],int m,int n,int target){
        int row=0;
        int col=m-1;
        while(row<n && col>0){
            if(arr[row][col]==target){return {row,col};}
            else if (arr[row][col]<target)row++;
            else col--;
        }
        return {-1,-1};
    }

int main ()

{
   int n;
   cout<<"Enter number ";
   cin>>n;
   


   return 0;
}
