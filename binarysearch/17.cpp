// BS 15: least capacity to ship packages within "D" days 
// an arrays of wights is given 
// D days is given we have to find minimum capacity to lift all these weights within d days 



#include<bits/stdc++.h>
using namespace std;



// function that return how many days ship will take to carry all wights for a given capacity for a ship 
int noOfDaysfunc(int arr[],int n,int cap){
    int day=1;
    int load=0;
    for (int i=0;i<n;i++){
        if(load+arr[i]>cap){
            day=day+1;
            load=arr[i];
        }
        else {load+=arr[i];}
    }
    return day;
}
 
// brute solution : 

int funcBrute(int arr[],int n, int cap){
    for(int i=maxi;i<sum;i++){
    int daysRq=noOfDaysfunc(arr,n,i);
    if (daysRq<=days){
        return daysRq;
    }
}
// optimal solution 

int func(int arr[],int n , int days)
{
    int low=maxi;
    int high=sumOfArr;
    while(low<=high){
        int mid=low+((high-low)/2);
        noOfDaysfunc(arr,mid,d);
        if(noOfDays<=days){
            high=mid-1;
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
