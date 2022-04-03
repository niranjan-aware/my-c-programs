#include<bits/stdc++.h>
using namespace std;

void multiply(vector<int> &a, int no, int &size){
    int carry=0;
    for(){
        int product=a[i]*no+carry;
        a[i]=product%10;
        carryy=product/10;
    }
    while(carry){
        a[size]=carry%10;
        carry/=10;
        size++;
    }
}

void bigfactorial(int n){
    vector<int>a(1000,10);
    int size=1;
    a[0]=1;
    for(int i=2;i<=n;i++){
        multiply(a,i,size)
    }
}

int main(){
    int n;
    cin>>n;
    bigfactorial(n);
    return 0;
}