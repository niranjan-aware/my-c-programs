#include<bits/stdc++.h>
using namespace std;
void clear_ith_bit(int &n,int i){
    int mask=~(1<<i);
    n=(n&mask);


}
void update_ith_bit(int &n,int i,int v){
    clear_ith_bit(n,i);
    int mask=(v<<i);
    n=(n|mask);
}
int main(){
    int n,i,v;
    cin>>n>>i>>v;
    update_ith_bit(n,i,v);
    cout<<n<<endl;


    return 0;
}