// BS 13: maximum no of days to make M bouquets
// k=no of adjacent flower required to make M bouquets 
// in arrays no of bouquets is given then on that day flower is boomed on that days 


#include<bits/stdc++.h>
using namespace std;
 
// function which tells possible to make m bouquets or not 
bool funcPossible(int arr[],int n,int day,int m,int k){

    int cnt=0;
    int noOfBouquets=0;
    for(int i=0;i<n-1;i++ )
    { if (arr[i]<=day){cnt++;}     // if element is lesser than day then it will bloom so cnt ++
  else {
        noOfBouquets=noOfBouquets+(cnt/k);
        cnt=0;
  }

  noOfBouquets+=(cnt/k);
  if(noOfBouquets>=m)  return true;
  else return false;


    }

 
    // brute solution
    int roseGarden (int arr[],int n ,int m,int k){
        if (n<(m*k)){return -1;}
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for (int i=0;i<n-1;i++)
        {
            mini=min[mini,arr[i]];
            maxi=max[maxi,arr[i]];

        }

for (int i=mini;i<=maxi;i++){
    if(funcPossible(arr,n,i,m,k)==True){
        return i;
    }
    else return -1;
}
}

       //optimal solution for this by binary search : 
    
        int roseGarden (int arr[],int n ,int m,int k){
        if (n<(m*k)){return -1;}
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for (int i=0;i<n-1;i++)
        {
            mini=min[mini,arr[i]];
            maxi=max[maxi,arr[i]];

        }

int low=mini;
int high=maxi;
while(low<=high){
    int mid=low+((high-low)/2);
    if(funcPossible(arr,n,mid,m,k)!=true){
        low=mid+1;

    }
    else low=mid+1;
}
return low;
}
int main ()

{
   int n;
   cout<<"Enter number ";
   cin>>n;
   


   return 0;
}
