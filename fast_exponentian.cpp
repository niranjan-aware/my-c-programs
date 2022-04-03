#include<bits/stdc++.h>
using namespace std;
int fast_expo(int n,int a){
    int ans=1;
    while(n>1){
    int last_bit=(n&1);
    if(last_bit){
        ans=ans*a;
    }
    a=a*a;
    n=n>>1;
}
return ans;
}
int main(){
    int n,a;
    cin>>n>>a;
    cout<<fast_expo(n,a)<<endl;
    return 0;
}
//everthing correct but not working
//check after some or by copying from source
