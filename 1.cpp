// finding largest element in an arrays 

#include<bits/stdc++.h>
using namespace std;


int func(int arr[],int n){
    int max=arr[0];

    for (int i=0;i<n;i++){
        if(arr[i]>max){ max=arr[i];}
    }
    return max;
}


int main ()
{


}