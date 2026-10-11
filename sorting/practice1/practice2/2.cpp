// Bubble Sort 

#include<bits/stdc++.h>
using namespace std;

int func(int arr[],int n)
{
    for (int i=n-1;i>=1;i--){
        int didSwap=0;
        for (int j=0;j<=i;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                didSwap++;
            }
            if (didSwap=0){ break;}
        }
    }
}

int main ()
{

}