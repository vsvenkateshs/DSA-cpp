//Quick sort
// Time complexity is O(NlogN)
// Space  Complexity is O(1)

 #include<bits/stdc++.h>
 using namespace std;
 
 int 

 
 int main ()
 {
    int n;
    cin>>n;
    cout<<"Enter the elements of array: ";
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,n);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

 }