#include<bits/stdc++>

using namespace std;

void selection_sort(int *a,int n){
    int min_index=0;
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(a[j]<a[min_index]){
                min_index=j;
            }
        }
        swap(a[i],a[minindex]);
    }
}

int main(){
    int arr[]={9,8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
    selection_sort(arr,n);
    for(auto x:arr){
        cout<<x<<" ";
    }
}