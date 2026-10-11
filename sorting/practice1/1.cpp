 //selection sort

 #include<bits/stdc++.h>
 using namespace std;

 void func(int arr[],int n){
    
    for (int i=0;i<n-1;i++)
    {
        int mini=i;
        for (int j=i;i<n;i++){
            if(arr[j]<arr[mini]){mini=j;}
        }
        int temp=arr[i];
        arr[i]=arr[mini];
        arr[mini]=temp;
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