#include<bits/stdc++.h>
using namespace std;
void clear_last_ibits(int &n,int i){
    int mask=(~0)<<i;
    n=n&mask;
} 
int main(){
    int n,i;
    cin>>n>>i;
    clear_last_ibits(n,i);
    cout<<n<<endl;
    return 0;
}