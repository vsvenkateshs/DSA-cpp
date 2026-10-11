 // multiple functions calls 
 #include<bits/stdc++.h>
 using namespace std;

 // fibonnaci numebr 

 int fibo(int n){
    if(n<=1){ return n;}

    int last=fibo(n-1);
    int slast=fibo(n-2);

    return last+slast;

 }

 int main ()
 {
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<fibo(n)<<endl;

    return 0;

 }