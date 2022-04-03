#include<bits/stdc++.h>

using namespace std;

void insertionsort(int *a,int n){
    for(int i=0;i<n;i++){
    int current=a[i];
    int prev=i-1;
    while(prev>=0 and current<a[prev]){
        a[prev+1]=a[prev];
        prev--;
    }
    a[prev+1]=current;
    }
}

int main(){
   int arr[]={9,8,7,6,5,4,3,2,1};
   int n=sizeof(arr)/sizeof(int);
   insertionsort(arr,n);
   for(auto x:arr){
       cout<<x<<" ";
   }

    return 0;
}