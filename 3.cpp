// check if array is sorted or not 

 #include<bits/stdc++.h>
 using namespace std;


 int func(int arr[],int n){
    for (int i=0;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
     }
    return true;
}

 int main(){
    return 0;
 }