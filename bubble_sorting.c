#include<stdio.h>
#include<stdlib.h>


void printarray(int *a,int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}


void bubblesort(int *a,int n){
    int temp,issorted=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                issorted=0;
            }
        }
        if(issorted){
            return;

        }
    }
}
int main(){
    int a[5]={4,5,2,7,8};
    int n=5;
    printarray(a,n);
    bubblesort(a,n);
     printarray(a,n);
     return 0;

}