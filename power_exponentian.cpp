#include<bits/stdc++.h>
using namespace std;

int power(int a,int b){
    int resultant=1;
    while(b){
       if(b&1) resultant*=a;
        a*=a;
       
        b=b>>1;
    }
    return resultant;

}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b)<<endl;
    return 0;
}