// BS 14: find the smallest divisor given a threshold



#include<bits/stdc++.h>
using namespace std;
 
    // brute solution
// time complxity is O(max)*O(N)
//space complexity is O(1)

    int func(int arr[], int n,int div,int th){
         int maxi=INT_MIN;
        for (int i=0;i<n;i++)
        {
            maxi=max[maxi,arr[i]];
        }

   for (int div=1;div<maxi;div++){
int sum=0;
for (int i=0;i<n-1;i++){
    sum+=ceil(arr[i]/div);
    if(sum<=th){return d;}
}

return -1;}


// optimal solution

int sumOfD(int arr[],int n,int d){

    int sum=0;
    for (int i=0,i<n;i++){
        sum+=ceil(arr[i]/d);
    }
    return sum;

}







int fn(int arr[],int n,int th){
    if (n>th) return -1;
    int low=1;
    int high=maxi;
    while(low<=high){
        int mid=low+((high-low)/2);
        if(sumOfD(arr,mid)<=th){
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
