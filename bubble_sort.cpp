#include<bits/stdc++.h>

using namespace std;

void bubblesort(int arr[],int n);

int main(){
    int arr[]={9,4,3,2,1,6,7,0};
    int n=sizeof(arr)/sizeof(int);
    bubblesort(arr,n);
    for(auto x:arr){
        cout<<x<<" ";
    }

}

void bubblesort(int arr[],int n){
    int issorted=0;
    for(int i=0;i<n-1;i++){
        issorted=1;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                issorted=0;
            }
        }
        if(issorted){
            return ;
        }
    }
}