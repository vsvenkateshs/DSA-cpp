 //finding second largest element of array
#include<bits/stdc++.h>
using namespace std;

// brute solution is to sort the array and find arr[n-1], but only if arr[n-1]!=max
int func(int arr[],int n){
    int max=INT_MIN;
    int secMax=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>max){max=arr[i];}
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max && arr[i]!=max){
            secMax=arr[i];
        }

    }
    return secMax;

}

// optimal solution : It is to keep a track on both largest and second largest element 

int func(int arr[],int n){
    int max=INT_MIN;
    int secMax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            secMax=max;
            max=arr[i];
        }
        else if(arr[i]>secMax && arr[i]!=max){
            secMax=arr[i];
        }

    }
    return secMax;
}