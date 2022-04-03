#include<bits/stdc++.h>
using namespace std;
void clear_range_of_bits(int &n,int i,int j){
    int a=(~0)<<(j+1);
    int b=(1<<i)-1;
    int mask=a|b;
    n=n&mask;
    //return n;
}
int main(){
    int i=1,j=3,n=31;
    //cin>>i>>j>>n;
    clear_range_of_bits(n,i,j);
    cout<<n<<endl;

    return 0;
}