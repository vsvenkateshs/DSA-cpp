//BS23: Find the row with maximum 1's

#include<bits/stdc++.h>
using namespace std;

int func(int arr[][100], int m,int n){
    int index=-1;
    int maxCount=-1;

    for (int i=0;i<n;i++){
        int countRow=0;
        for (int j=0;j<m;j++){
if (arr[i][j]==1){
    countRow+=arr[i][j];
}
if(countRow>maxCount){
    maxCount=countRow;
    index=i;
}
}
    }
    return index;
}


// find the lower index and find m-2;




int main ()

{
   int n;
   cout<<"Enter number ";
   cin>>n;
   


   return 0;
}
