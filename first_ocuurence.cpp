#include<bits/stdc++.h>
using namespace std;
int first_occurence(int arr[],int key,int n){
    if(n==0){
        return -1;
    }
    if(arr[0]==key){
        return 0;
    }
    int subindex=first_occurence(arr+1,key,n-1);
    if(subindex!=-1){
        return subindex+1;
    }
    return -1;
}
int main(){
    int arr[]={1,8,9,2,3,4,7,6,0};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    cout<<first_occurence(arr,key,n)<<endl;
    return 0;
}