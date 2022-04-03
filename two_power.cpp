#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n&(n-1)){
        cout<<"The Number Is Not The Power Of Two"<<endl;
    }
    else{
        cout<<"The Number Is  The Power Of Two"<<endl;
    }

    return 0;
}