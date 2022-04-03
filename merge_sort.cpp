#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr,int s,int e){
    int i=s,m=(s+e)/2,j=m+1;
    vector<int>temp;
    while(i<=m&&j<=e){
        if(arr[i]<arr[j]){
            arr.push_back(i);
            i++;
        }
        else{
            arr.push_back(j);
            j++;
        }
    }
    while(i<=m){
        arr.push_back(arr[i++]);
        
    }
    while(j<=e){
        arr.push_back(arr[j++]);
    }
    int k=0;
    for(int i=s;i<=e;i++){
        arr[i]=temp[k++];
    }
    return;
}
void mergesort(vector<int>&arr,int s,int e){
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    return merge(arr,s,e);
}
int main(){
   vector<int>arr{10,5,2,0,7,6,4};
   int s=0;
   int e=arr.size()-1;
   mergesort(arr,s,e);
   for(int i =0;i<arr.size();i++){
       cout<<arr[i]<<" ";
   }
       cout<<endl;

    return 0;
}