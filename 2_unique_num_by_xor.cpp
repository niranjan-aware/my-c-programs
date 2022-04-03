#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&v,int n){
    int xr=0;
    for(int i=0;i<n;i++){
        xr=xr^v[i];
    }
    int pos=0;
    int temp=xr;
     while((temp&1)==0){
            pos++;
            temp=temp>>1;
        }
    int seta=0;
    int setb=0;
    int mask=(1<<pos);       
    for(int i=0;i<n;i++){
        if((v[i]&mask)>0){
            seta=seta^v[i];
        }
        else{
            setb=setb^v[i];
        }
    }
    cout<<seta<<endl;
    cout<<setb<<endl;
    
}

int main(){
    int n=8;
    vector<int >vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    solve(vec,n);
    return 0;
}