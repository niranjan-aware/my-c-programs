#include<bits/stdc++.h>
using namespace std;

pair<int,int> stair_case_search(int arr[4][4],int m,int n,int key){
    if(key<arr[0][0]||key>arr[m-1][n-1]){
        return {-1,-1};
    }
    int i=0;
    int j=n-1;
    while(i<=m-1&&j>=0){
        if(arr[i][j]==key){
            return {i,j};
        }
        else if(arr[i][j]>key){
            j--;
        }
        else{
            i++;
        }
    }
    return {-1,-1};

}
int main(){
    int arr[4][4]={{10,20,30,40},
                    { 15,25,35,45},          
                    {27,29,37,48},          
                    { 32,33,39,50}};
    int m=4,n=4,key;
    cin>>key;
    pair<int,int>cords= stair_case_search(arr,m,n,key);
    cout<<cords.first<<" "<<cords.second<<endl;
}