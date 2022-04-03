#include<bits/stdc++.h>

using namespace std;

int max_sum_arrays(int arr[],int n);

int main(){
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(int);
    int k= max_sum_arrays(arr,n);
    cout<<k<<endl;



    return 0;
}

int max_sum_arrays(int arr[],int n){
    int max_sum=0,sum_subarrays;
    for(int i=0;i<n;i++){
        sum_subarrays=0;
        for(int j=i;j<n;j++){
            for(int k=i;k<j;k++){
                sum_subarrays+=arr[k];

            }
            if(max_sum<sum_subarrays){
                max_sum=sum_subarrays;
            }
        }
    }
    return max_sum;
}
