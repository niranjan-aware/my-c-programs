#include<bits/stdc++.h>
using namespace std;

void scan(vector<int> &y,int x);

void solve(vector<int> &v,int b,int n);

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	        int n,b,x;
	        // cin>>n;
          // cin>>b;
          scanf("%d %d",&n,&b);
          x=3*n;
	        vector<int>vec(x);
          scan(vec,x);
	        solve(vec,b,x);
	}
	return 0;
}

void scan(vector<int> &y,int x){
  for(int i=0;i<x;i++){
    cin>>y[i];
  }
}

void solve(vector<int> &v,int b,int x){
  cout<<"element b is"<<b<<endl;
  int max=0,count=0;
  int j=1,k=2;
  for(int i=0;i<x;i=i+3){
    int m;
    m=v[i]*v[j];
    
    cout<<m<<"***"<<endl;
    cout<<v[k]<<"***"<<endl;
    if((m>max)&&(v[k]<=b)){
      max=m;
      count++;
      
    }
    cout<<"max element is this"<<max<<endl;
    j=j+3;
    k=k+3;
  }
  if(count>0){
    cout<<max<<endl;
  }
  else{
    cout<<"no tablet"<<endl;
  }
}