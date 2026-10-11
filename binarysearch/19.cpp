//New pattern binary search questions 
// min(max)  or max(min)


//BS17: Aggressive Cows : minimum distance between cows is maximum
/// no of cows is given then you have to find where all cows are placed such that minimumdistance between two cows is maximum


#include<bits/stdc++.h>
using namespace std;


// Brute Approach
// time complexity is O(max-min)*O(N)
//space complexity is O(1)


// function which tells us that canWePlace or not 
bool canWePlace(int arr[],int n,int dist,int cows)
{
    int countCows=1;
    int lastCow=arr[0];
    for (int i=0;i<n;i++)
    {
        if(arr[i]-lastCow>=dist){
            countCows++;
            lastCow=arr[i];
        }

    }
    if(countCows>=cows){return true;}
    else return false;
}
int func(int arr[],int n,int cows){
    sort(arr,arr+n);
    for (int i=0;i<n;i++)
    {
        if(canWePlace(arr,n,i,cows)==true){
            continue;
        }
        else return i-1;
    }
}

// optimal solution 

int func2(int arr[],int n,int k)
{
    sort(arr,arr+n);
int low=0;

int ans=0;
int high=arr[n-1]-arr[0];
while(low<=high){
    int mid=low+((high-low)/2);
   if(canWePlace(arr,mid,cows)==True){
    ans=mid;
    low=mid+1;
   }
   else high=mid-1;

}
return ans;
}






int main ()

{
   int n;
   cout<<"Enter number ";
   cin>>n;
   


   return 0;
}
