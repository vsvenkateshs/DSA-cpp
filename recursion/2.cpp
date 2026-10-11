 // some more questions
 #include <bits/stdc++.h>
 using namespace std;

 void sumN(int i,int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
        
    }
    sumN(i-1,sum+i);
 }
// fining sum by functional recursion i.e without passing sum in argument by return type
int sumN2(int n){
    if (n==0){return 0;}

    return n+sumN2(n-1);
}

int factorial(int n)
{ if (n==1){return 1;}
    return n*factorial(n-1);
}

// function to swap  an array
void swapArray(int i, int arr[], int n){

    if (i>=n/2){return;}

    swap(arr[i],arr[n-i-1]);
    swapArray(i+1,arr,n);

}
//check a string is a palindrome or not 
bool palinDrome(int i, string &str){

if (i>=str.size()) return true;
if (str[i] !=str[str.size()-i-1]) return false;
 return palinDrome(i+1,str);


}




 int main()
 {
   // int n;
   // cout<<"enter n"<<endl;
   // cin>>n;
    //sumN(n,0);
    //cout<<sumN2(n)<<endl;
   // cout<<factorial(n)<<endl;
  /*int arr[n];
  cout<<"enter array elements"<<endl;
  for (int i=0;i<n;i++)
  {
    cin>>arr[i];  }

    swapArray(0,arr,n);
    for(int i=0;i<n;i++){ cout<<arr[i]<<" ";} */
    string str="maedam";
    cout<<palinDrome(0, str);


    return 0;
 }
