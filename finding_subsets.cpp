#include<bits/stdc++.h>
using namespace std;

void printsubarray(char arr[],int i){
    int j=0;
    while(i>0){
        int last_bit=i&1;
        if(last_bit){
            cout<<arr[j];
        }
            i=i>>1;
            j++;
        
    }
    cout<<endl;
}

void generateallsub(char arr[],int n){
     for(int i=0;i<(1<<n);i++){
         printsubarray(arr,i);
     }
}

int main(){  
    char arr[10];
    cin>>arr;
    int n=strlen(arr);
    generateallsub(arr,n);

    return 0;
}