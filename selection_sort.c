#include<stdio.h>
#include<stdlib.h>


void printarray(int *a,int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}


void selectionsort(int *a,int n){
    int temp,indexmin;
    for(int i=0;i<n-1;i++){
        indexmin=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[indexmin]){
                indexmin=j;
            }
        }
        temp=a[i];
        a[i]=a[indexmin];
        a[indexmin]=temp;
    }
}


int main(){
    int a[5]={7,2,9,5,1};
    int n=5;
    printarray(a,n);
    selectionsort(a,n);
    printarray(a,n);

    return 0;
}