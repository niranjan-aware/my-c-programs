#include<bits/stdc++.h>
using namespace std;
void clear_range_of_bits_and_replace(int &n,int m,int i,int j){
    int a=(~0)<<(j+1);
    int b=(1<<i)-1;
    int mask=a|b;
    n=n&mask;
    int k=m<<i;
    n=n|k;
}
int main(){
    int i=1,j=3,n=15,m=2;
    clear_range_of_bits_and_replace(n,m,i,j);
    cout<<n<<endl;

    return 0;
}