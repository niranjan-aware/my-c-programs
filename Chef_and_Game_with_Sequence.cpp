#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>&v,int n);
void scan(vector<int>&v,int n);
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int>vec(n);
        scan(vec,n);
        solve(vec,n);
    }
    return 0;
}
void scan(vector<int>&v,int n){
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
}
void solve(vector<int>&v,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
               if(v[i]%2==0){
                   
               }
        }
    }
}