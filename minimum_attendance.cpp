#include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include<string>
using namespace std;
void solve(vector<string> &s,int n);
int main(){
   int t;
   cin>>t;
   for(int i=0;i<t;i++){
       int n,p;
       cin>>n;
       p=n+1;
       vector<char>str(p);
       for(int i=0;i<n;i++){
           cin>>str[i];
       }
       solve(str,n);
   }



    return 0;
}
void solve(vector<char> &s,int n){
    // int count_0=count(s.begin(),s.end(),0);
    // int ans=120-(count_0);
    // float x=ans/120;
    // if(x>=0.75){
    //     cout<<"YES"<<end;
    // }
    // else{
    //     cout<<"NO"<<end;
    // }

}