#include<bits/stdc++.h>
using namespace std;
//input=1 7 3 5 6 9 6 5 3
void solve(vector<int>&v,int n){
     int xr=v[0]^v[1];
     for(int i=2;i<n;i++){
         xr=xr^v[i];
     }
     //or this way also
     //int xr=0
    //  for(int i=0;i<n;i++){
    //      xr=xr^v[i];
    //  }
     cout<<xr<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        solve(arr,n);
    }


    return 0;
}