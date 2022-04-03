#include<bits/stdc++.h>
using namespace std;
//this is fist method,it took no of iteration=no total bits in no;
//****1****
int count_bits(int &n){
    int ans=0;
    while(n>0){
        int last_bit=n&1;
        ans=ans+last_bit;
    n=n>>1;
    }
    return ans;
}
//this is second method which makes the iteration equal to set bits
//****2****
int count_bits_hack(int n){

	int ans = 0;
	while(n>0){
		//removes the last set bit from the current number
		n = n & (n-1);
		ans++;
	}

	return ans;
}
int main(){
   int n;
   cin>>n;
  // cout<<count_bits(n)<<endl;
   cout<<count_bits_hack(n)<<endl;


    return 0;
}