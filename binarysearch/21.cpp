//New pattern binary search questions 
// min(max)  or max(min)


//BS19:
//Painter's Partition /Split arrays largest Sum
// split arrays into "K" subarrays such that the maximum subarrays sum is minimum
//
//Exactly same as Allocate Books to m students (important and famous question)
#include<bits/stdc++.h>
using namespace std;
// function that gives no of students to which n arrays are distributed 

int func(int arr[],int n, int pages,int m){
int students=1;
int pageStudents=0;

for (int i=0;i<n;i++)
{
    if(pageStudents+arr[i]<=pages){
        pageStudents+=arr[i];
    }
    else {students++;
    pageStudents=arr[i];}

}
return students;

}


// brute 

int func(int arr[],int n, int pages,int m){
    int maxi=INT_MIN;
    int sum=0;
     for (int i=0;i<n;i++)
        { 
     maxi=max(maxi,arr[i]);
     sum+=arr[i];}
        int low=maxi;
        int high=sum;
        for(int pages=low;pages<=high;pages++)
        {
            int countStudents=func(arr,n,pages,m);
            if (countStudents==m){
                return pages;

            }

        }
    
}


// optimal 
int func(int arr[],int n, int pages,int m){
    int maxi=INT_MIN;
    int sum=0;
     for (int i=0;i<n;i++)
        { 
     maxi=max(maxi,arr[i]);
     sum+=arr[i];}
        int low=maxi;
        int high=sum;
       
while(low<=high){
    int mid=low+((high-low)/2);
    int noOfStudents=func(arr,n,mid,m);
    if(noOfStudents>m){
        low=mid+1;}
        else high=mid-1;
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
