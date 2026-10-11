//find the missing number in an array of n elements and numbers in array are from 1 to n;
// for example arr[5]={1,2,4,5}  // So missing number should return missing is 3


#include<bits/stdc++.h>
using namespace std;

//Brute solution : 
// T.C -> O(2n)
// S.C -> O(1)
int func(int arr[], int n){
 for (int i=1;i<n;i++)
    {  int flag=0;
        for (int j=0;j<n;j++)
        {
            if (arr[j]==i);
            {flag=1;
              break;
            }
             if (flag==0) return i;
        }
       
    }
}


//Optimal solution 1 :by sum method 
// T.C. --> O(N)      S.C --> O(1)

int func(int arr[],int n)
{  int sum=0;
    int sum2=n*((n+1)/2);
    for (int i=1;i<=n;i++){
        sum+=arr[i];

    }
    return sum2-sum;
}

int func2(int arr[],int n ){
    int xor1=0;
    int xor2=0;

    for (int i=1;i<n;i++){
        xor1=xor1^arr[i-1];
        xor2=xor2^i;
    }
    return xor1^xor2;

}