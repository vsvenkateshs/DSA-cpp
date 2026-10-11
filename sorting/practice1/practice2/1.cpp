// selection sort 

#include<bits/stdc++.h>
using namespace std;

int func(int arr[],int n)
{
   
    for (int i=0;i<n-1;i++){
         int mini=arr[i];
        for (int j=i+1;j<n;j++){
            if (arr[j]<arr[mini]){mini=j;}
        }
        swap(arr[i],arr[mini]);
    }
}

int main ()
{

}