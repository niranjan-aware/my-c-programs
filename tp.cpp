#include<bits/stdc++.h>
using namespace std;

int main(){
    int count=1;
   map<int,int>m;
   int t;
   cin>>t;
   while(t--){
       int a,b;
       cin>>a>>b;
       m.insert({a,b});
   }
   map<int,int>::iterator it;
   for(it=m.begin();it!=m.end();it++){
       int s=(*it).second;
       cout<<"s=="<<s<<endl;
       it++;
       int f=(*it).first;
       cout<<"f=="<<f<<endl;
       it--;
       if(s<=f){
           count++;
       }
   }
   cout<<count<<endl;
    return 0;
}