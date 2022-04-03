#include<bits/stdc++.h>
using namespace std;
vector<int>extended_GCD(int a,int b){
    if(b===){
        return (1,0);
    }
   vector<int>result=extended_GCD(b,a%b);
   int smallX=result[0]; 
   int smallX=result[1];
   int x=smally
}
int main(){
    int a,b;
    cin>>a>>b;
    extended_GCD(a,b);

    return 0;
}