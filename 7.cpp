//left rotate array by d places
#include<bits/stdc++.h>
using namespace std;

// Brute Solution 
// in this we will take a temp array and just put all the elements from 0 to d places in that array and then do shifting 
// after shifting put elements again in the array from temp array 

// Time complexity is O(d)+O(n-d)+O(d)=O(n+d)
// Space complexity is O(d)

int func(int arr[],int n,int d){
d=d%n;
int temp[d];

for(int i=0;i<d;i++){
  temp[i]=arr[i];
}
for(int i=d;i<n;i++){
    arr[i-d]=arr[i];
}
// pushing back elements in array
for(int i=n-d;i<n;i++){
    arr[i]=temp[i-(n-d)];
}

}

// Optimal Solution
//it is based on reversing the first d elements and then reversing elements from d to n and then again reversing the whole array will get shift by d places

// Time Complexity is O(d)+O(n-d)+O(n)=O(2n)

int func(int arr[], int n,int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
    
}






// Optimal Solution
//it is based on reversing the first d elements and then reversing elements from d to n and then again reversing the whole array will get shift by d places

// Time Complexity is O(d)+O(n-d)+O(n)=O(2n)