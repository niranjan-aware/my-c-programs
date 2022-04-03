#include<bits/stdc++.h>
using namespace std;
int xoring(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        int x=arr[i]^arr[i+1];
        cout<<x<<endl;
        if(x!=0){
            count++;
            i++;
        }
    }
    return count;
}
int main(){
    int arr[]={2,2,5,4,4};
    int  n=sizeof(arr)/sizeof(n);
    cout<<xoring(arr,n)<<endl;

    return 0;
}