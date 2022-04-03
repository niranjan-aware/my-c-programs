#include<bits/stdc++.h>
using namespace std;
void spiral_print(int arr[][10],int m,int n){
      int start_row=0;
      int start_cl=0;
      int end_row=m-1;
      int end_cl=n-1;
      while(start_cl<=end_cl&&start_row<=end_row){
      //start row
      for(int col=start_cl;col<=end_cl;col++){
        //    if(start_row==end_row){
        //       break;
        //   }
          cout<<arr[start_row][col]<<" ";
      }
      //end col
      for(int row=start_row+1;row<=end_row;row++ ){
        //    if(start_cl==end_cl){
        //       break;
        //   }
          cout<<arr[row][end_cl]<<" ";
      }
      //end row
      for(int col=end_cl-1;col>=start_cl;col--){
          if(start_row==end_row){
              break;
          }
          cout<<arr[end_row][col]<<" ";
      }
      //start col
      for(int row=end_row-1;row>=start_row;row--){
          if(start_cl==end_cl){
              break;
          }
          cout<<arr[row][start_cl]<<" ";
      }
      start_row++;
      start_cl++;
      end_row--;
      end_cl--;
      }

}
int main(){
    int arr[][10]={{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12} };
    int m=4,n=4;
    spiral_print(arr,m,n);
    return 0;
}