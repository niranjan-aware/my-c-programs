// #include<bits/stdc++.h>
#include<iostream>

using namespace std;

void reversearray(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

void printarr(int arr[],int n){
//    for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
while(n--){
    int i=0;
    cout<<arr[i]<<" ";
    i++;
}
      cout<<endl;
}

int main(){
    int arr[10]={1,22,33,44,55,56,57,88,89,90};
    int n=10;//sizeof(arr)/sizeof(int);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    //   cout<<endl;
    printarr(arr,n);
    reversearray(arr,n);
    printarr(arr,n);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    return 0;
}

