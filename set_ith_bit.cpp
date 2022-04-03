#include<bits/stdc++.h>
using namespace std;
void  Set_Ith_Bit(int &n,int i){
    int mask=(1<<i);
    n=(n|mask);
}
int main(){
   int n,i;
   cin>>n>>i;
   Set_Ith_Bit(n,i);
   cout<<n<<endl;

    return 0;
}