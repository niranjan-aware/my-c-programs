#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        string s;
    //     for(int i=0;i<n;i++){
    //      cin>>s[i];
    // }
        string arr;
        string arr1;
        int z=0;
	for(int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            for (int k = i; k <= j; k++){
                arr[k]=s[k];
                
            }
            strcpy(arr,arr1);
        }
    }
   
//   vector<int>::iterator i;
//   for(i=arr.begin();i!=arr.end();i++){
//       cout<<*i<<endl;
//   }
    int siz=arr.size();
    for(int i=0;i<siz;i++){
         cout<<arr[i]<<endl;
    }

    
    }
    return 0;
}