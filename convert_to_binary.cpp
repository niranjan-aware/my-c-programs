#include<bits/stdc++.h>
using namespace std;
int convert_to_binary(int &n){
    int p=1;
    int ans=0;
    while(n>0){
        int last_bit=n&1;
        ans=ans+p*last_bit;
        p=p*10;
        n=n>>1;
    }
    return ans; 
}
int main(){
    int n;
    cin>>n;
    cout<<convert_to_binary(n);
    //cout<<binary<<endl;


    return 0;
}