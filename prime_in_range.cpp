//finding prime in between a to b
//using siveve them
//this methods works in (logn)+(nloglogn)+n;
#include<bits/stdc++.h>
using namespace std;

void prime(vector<int>&vec,int n){
    vec[0]=vec[1]=0;
    for(int i=2;i<=n;i++){
        for(int j=i*i;j<=n;j=j+i){
            if(vec[j]){
                vec[j]=0;
            }
        }
    }
}

void prime_range(vector<int>&vec,vector<int>&v,int n){
    int a=0;
    for(int i=1;i<=n;i++){
        a=a+vec[i];
         //v[i]=v[i]+vec[i];
         v[i]=a;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>vec(n,1);
    vector<int>v(n,0);
    prime(vec,n);
    prime_range(vec,v,n);
    cout<<v[10]<<endl;
    // for(){}
    //  for(int i=0;i<100;i++){
    //     if(vec[i]){
    //         cout<<i<<" ";
    //     }
    // }
    return 0;
}