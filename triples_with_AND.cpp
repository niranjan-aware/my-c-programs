#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[3]={2,1,3},n=3,cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                int ans=a[i]&a[j]&a[k];
                if(ans==0){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}