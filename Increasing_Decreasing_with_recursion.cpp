#include<bits/stdc++.h>
using namespace std;
int increasing(int arr[],int i,int n){
    if(n==i){
          return 0;       
    }
    if(i<=n){
        arr[i]=i+1;
    cout<<arr[i]<<" ";
     increasing(arr,i+1,n);
    }
   return 0;
} 
int decreasing(int arr[],int i,int n){
    if(n==0){
        return 0;
    }
    if(n>0){
        arr[i]=n;
        cout<<arr[i]<<" ";
        decreasing(arr,i+1,n-1);
    }
    return 0;
}
//**********************************************
//**********************************************
/* in the problem of recursion when you are coming 
from smaller problem to bigger one that time you have to 
make the first function call then do the code(like increasing funtion here)
And when bigger to smaller one then do oppsite thing (like decresing function)
*/
void dec(int n){
	//base case
	if(n==0){
		return;
	}
	//towards the base case
	cout<<n <<",";
	dec(n-1);
}

void inc(int n){
	//base case
	if(n==0){
		return;
	}
	inc(n-1);
	cout<<n <<",";
}
int main(){
    int n;
    cin>>n;
    int arr[n]={0};
    increasing(arr,0,n);
    cout<<endl;
    decreasing(arr,0,n);
    return 0;
}