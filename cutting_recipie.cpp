#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(vector<int>&v,vector<int>&z,int n){
        int min=v[0],count=0;
        for(int i=1;i<n;i++){
                if(min>v[i]){
                        min=v[i];
                }
        }
        for(int i=0;i<n;i++){
                if(v[i]%min==0){
                        v[i]=v[i]/min;
                        count++;
                }
                // else{
                //         break;
                // }
        }
        if(count==n){
                for(int i=0;i<n;i++){
                        cout<<v[i]<<" ";
                }
                cout<<endl;
        }
        else{
                for(int i=0;i<n;i++){
                        cout<<z[i]<<" ";
                }
                cout<<endl; 
        }
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	        int n;
	        cin>>n;
	        vector<int>vec(n);
	        vector<int>vec1(n);
	        for(int i=0;i<n;i++){
	                cin>>vec[i];
	        }
	        for(int i=0;i<n;i++){
	                vec1[i]=vec[i];
	        }
	        solve(vec,vec1,n);
	}
	return 0;
}
