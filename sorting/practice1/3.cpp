 //Bubble sort

 #include<bits/stdc++.h>
 using namespace std;

 void func(int arr[],int n){
    
    for (int i=1;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
        
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
    func(arr,n);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

 }