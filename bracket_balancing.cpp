#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    stack<char>st;
    for(int i=0;i<n;i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                cout<<" "<<"not matched"<<endl;
                return 0 ;
            }
            else if(s[i]==')'||s[i]==']'||s[i]=='}'){
                st.pop();
            }
        } 
    }
    if(st.empty()){
        cout<<" "<<"matched"<<endl;
    }
   
    else{
        cout<<" "<<"not matched"<<endl;
    }
    return 0;
}