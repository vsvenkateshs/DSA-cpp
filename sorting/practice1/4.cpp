//Merge sort
// Time Complexity is O(log2N)
// Space complexity is O(N)

 #include<bits/stdc++.h>
 using namespace std;
  
 int merge(int arr[],int low, int mid,int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while((left<=mid)&& (right<=high)){
        if(arr[left]<=arr[right]){
            temp.push(arr[left]);
            left++;
        }
        else {temp.push(arr[right]);
        right++;}
        while(left<=mid)
{
    temp.add(arr[left]);
    left++;

}

while(right<=high)
{
    temp.add(arr[right]);
    right++;


}

    }

 }


 int mergeSort(int arr[],int low, int high){
    if (low>=high) {  return ;}
    int mid=low+((high-low)/2);
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);

    

 }





 
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