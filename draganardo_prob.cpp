#include <bits/stdc++.h>
using namespace std;
int getpopcount(int x){
        int ans=0;
        while(x){
                if(x&1)ans++;
                x=x>>1;
        }
        return ans;
        
}
void solve(vector<int>&v,int n);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	        int n;
	        cin>>n;
	        vector<int>vec(n);
	        for(int i=0;i<n;i++){
	                cin>>vec[i];
	        }
	        solve(vec,n);
	}
	return 0;
}
void solve(vector<int>&v,int n){
        for(int i=0;i<n;i++){
                if(getpopcount(v[i]^v[i+1])==getpopcount(v[i+2]^v[i+3])){
                        cout<<i<<" "<<i+1<<" "<<i+2<<" "<<i+3<<endl;
                        return;
                }
        }
}