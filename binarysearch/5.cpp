// first and last occurence of a element 

#include<bits/stdc++.h>
using namespace std;
 

//Better solution : 
//Time complexity is O(N)
//space complexity is O(1)
void func(int arr[],int n,int key)
{ 

   int first=-1;
   int last=-1;

   for (int i=0;i<n;i++)
{
   if (arr[i]==key){
      if (first==-1) {first=i;}
      
      last=i;
   }
}

cout<<first<<" "<<last; 

}


//optimal solution 1 : by using lower bound and upper bound 

//Time complexity is log2(N)
//Space Complexity is O(1)

void func2(int arr[],int n,int key)
{  int low=0;
    int high=n-1;
    int ans1=-1;

while(low<=high)
{
    int mid=low+((high-low)/2);
    if (arr[mid]>=key) {
        ans1=mid;
        high=mid-1;
   
        }
    else low=mid+1;
    }


    //last occurence 

   low=0;high=n-1;
    int ans2=-1;
    while(low<=high)
{
     int  mid=low+((high-low)/2);
    if (arr[mid]>key) {
        ans2=mid;
        high=mid-1;}
    else low=mid+1;
    }
   
    if (ans1==n || arr[ans1]!=key){
        cout<<"Not found ";
    }
   else  cout<<ans1<<"  "<<ans2;


}

// By using c++ STL

//auto first = lower_bound(arr, arr + n, key) - arr;
//auto last = upper_bound(arr, arr + n, key) - arr - 1;

//Optimal Solution 2 :By binary search only not any other things 


// for first occurence 
int func3(int arr[], int n,int key)
{
    int low=0;int high=n-1;
int first=-1;
  
    while(low<=high)
    {
      int mid=low+(high-low)/2;

        if (arr[mid]==key){
          first=mid;
          high=mid-1;}

          else if (arr[mid]<key){
            low=mid+1;}
            else high=mid-1;

    }
    return first;
    
}
// for second occurence 
int func4(int arr[],int n,int key)
{
    int low=0;
    int high=n-1;
    int last=-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if (arr[mid]==key){
            last=mid;
            low=mid+1;

        }
        else if (arr[mid]<key){
            low=mid+1;
        }
        else high=mid-1;
    }
    return last;
}
pair<int,int > funcOptimal2(int arr[],int n, int key)
{
    int first=func3(arr,n,key);
    if (first==-1) return{-1,-1};
     int last=func4(arr,n,key);
      return {first,last};
      // if we need to find number of occurence then we can do it like 
      // no of occurence =last-first+1

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
   cout<<"enter key elemetns to find first and last occurence of arrays";
   cin>>key;

   //func(arr,n,key);
    //func2(arr,n,key);

   pair<int, int> result;

    result = funcOptimal2(arr,n,key);  // calling function

    cout << result.first << " " << result.second;



    return 0;
}
