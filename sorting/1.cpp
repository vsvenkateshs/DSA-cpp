 //selection sort

 #include<bits/stdc++.h>
 using namespace std;

 void selectionsort(int arr[],int n){
    for (int i=0;i<=n-2;i++){
        int mini=i;
        for (int j=i;j<=n-1;j++){
            if (arr[j]<arr[mini]){
                mini=j;}
             }
               swap(arr[i],arr[mini]);
        
    }





 }
 
 int main ()
 {
    int n;
    cout<<"Enter the number of elements in array:";
    cin>>n;

    cout<<"Enter the elements of array: ";
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionsort(arr,n);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

 }