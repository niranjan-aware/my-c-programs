#include<bits/stdc++.h>
using namespace std;
bool IsSorted1(int arr[],int n){
    if(n==1||n==0){
        return true;
    }
    if(arr[0]<arr[1]&&IsSorted1(arr+1,n-1)){
        return true;
    }
    return 0;
}
bool IsSorted2(int arr[],int i,int n){
    if(i=n-1){
        return true;
    }
    if(arr[i]<arr[i+1]&&IsSorted2(arr,i+1,n)){
        return true;
    }
    return 0;
}
int main(){
    int arr[]={1,2,3,5,7,8,9};
    int n=sizeof(arr)/sizeof(int);
    cout<<IsSorted1(arr,n)<<endl;
    cout<<IsSorted2(arr,0,n)<<endl;
    return 0;
}