// floor and ceil in sorted arrays 
//floor is largest no in arrays such that<=x
//ceil is smallest no in arrays >=x

#include<bits/stdc++.h>
using namespace std;
 

// Time compelxity is O(logN)
//floor : largest no in array <=x 
int func(int arr[],int n,int key)
{ int low=0;
    int high=n-1;
    int ans=0;
    while(low<=high)
    {
        int mid=low+((high-low)/2);

        if (arr[mid]<=key){
            ans=arr[mid];
            low=mid+1;
        }
        else high=mid-1;
    }

    return ans;

}



//for ceil : it is same as lower bound 

int func2(int arr[],int n,int key)
{  int low=0;
    int high=n-1;
    int ans=0;
while(low<=high)
{
    int mid=low+((high-low)/2);
    
    if (arr[mid]>=key) {
        ans=arr[mid];
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
   cout<<"enter key elemetns to find ceil and floor";
   cin>>key;

   cout<<"floor of key element is at index "<<func(arr,n,key)<<endl;
   cout<<"ceil of key element is at "<<func2(arr,n,key);
  



    return 0;
}
