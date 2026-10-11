// left shift an array by one position
 #include<bits/stdc++.h>
 using namespace std;

 int func(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
 }

int main(){

    return 0;
}