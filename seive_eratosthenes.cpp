#include<bits/stdc++.h>
using namespace std;
#define N 100000
//#define int long long int  ;
void prime_sieve(vector<long long int>&v,int n){
    v[0]=v[1]=0;
    for(int i=2;i<=n;i++){
        for(int j=i*i;j<=n;j=j+i){
            if(v[j]){
                v[j]=0;
            }
        }
    }
}

int32_t main(){
    vector<long long int>sieve(N,1);
    prime_sieve(sieve,100);
    for(int i=0;i<100;i++){
        if(sieve[i]){
            cout<<i<<" ";
        }
    }
    return 0;
}