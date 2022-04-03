#include<bits/stdc++.h>
using namespace std;
int last_occurence(int arr[],int key,int n){
    if(n==0){
        return -1;
    }
    int subindex=last_occurence(arr+1,key,n-1);
    if(subindex==-1){
        if(arr[0]==key){
            return 0;
        }
        else{
            return -1;
        }
    }
    else{
        return subindex+1;
    }
}
int main(){
    int arr[]={1,3,4,5,6,7,3,7,8,9,8};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    cout<<last_occurence(arr,key,n)<<endl;
    return 0;
}