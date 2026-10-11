// to return number of unique element sof an sorted array
 #include<bits/stdc++.h>
 using namespace std;

 int func(int arr[],int n){
int i=0;
for(int j=1;j<n;j++){
    if(arr[j]!=arr[i]){
        arr[i+1]=arr[j];  // just placing unique elements in front and then checking it with the whole array
        i++;
    }
}
return i;
 }

 int main(){

 }
