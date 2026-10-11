//Lower bound and upper bound 
//lower bound is smallest index such that arr[index]>=x;
//Upper bound is smallest index such that arr[index]>x;

#include<bits/stdc++.h>
using namespace std;
 

// Time compelxity is O(log2N)

int func(int arr[],int n,int key)
{ int low=0;
    int high=n-1;
    int ans=n;
while(low<=high)
{
    int mid=low+((high-low)/2);
    if (arr[mid]>=key){
        ans=mid;
        high=mid-1;
    }
    else low=mid+1;

}
return ans;

}


//Upper bound 
// Time compelxity is O(log2n)
int func2(int arr[],int n,int key)
{ int low=0;
    int high=n-1;
    int ans=n;
while(low<=high)
{
    int mid=low+((high-low)/2);
    if (arr[mid]>key){
        ans=mid;
        high=mid-1;
    }
    else low=mid+1;

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
   cout<<"enter key eleemtns to search in arrays";
   cin>>key;

   cout<<"Lower bound of key element is at index "<<func(arr,n,key)<<endl;
   cout<<"Upper bound of key element is at index "<<func2(arr,n,key);
  



    return 0;
}
