#include<iostream>
using namespace std;
int xoring(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i+=2){
        int x=arr[i]^arr[i+1];
        if(x!=0){
            return i+1;
            i++;
        }
    }
    return -1;
}
int main(){
    int arr[]={2,2,6,6,7,7,9};
    int  n=sizeof(arr)/sizeof(n);
    cout<<xoring(arr,n)<<endl;

    return 0;
}