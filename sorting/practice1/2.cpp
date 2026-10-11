 //Bubble sort

 #include<bits/stdc++.h>
 using namespace std;

 void func(int arr[],int n){
    int didSwap=0;
      for (int i=n-1;i>=0;i--){
        
        for (int j=0;j<n;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

                didSwap++;
        }
        if(didSwap==0){ break;}

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