#include<bits/stdc++.h>
using namespace std;

int multiply(int a,int b,int c){
    int res=0;
    while(b){
        if(b&1){
            res=res+a;
            res=res%c;
            a=a+a;
            a=a%c;
            
        }
        b=b>>1;
    }
    return res;
}

int main(){
    int a,b,c=1e9+7;
    cin>>a>>b;
    cout<<multiply(a,b,c);
 

    return 0;
}