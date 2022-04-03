#include<stdio.h>
#include<stdlib.h>


struct stack{
    int size;
    int top;
    int *arr;
};


void peek(struct stack ptr,int i){
    int c=ptr.top-i+1;
    if(c<0){
        printf("stck is under flow");
    }
  else{
      printf("%d\n",ptr.arr[c]);
  }
    
}

int main(){
    struct stack s;
    s.size=5;
    s.top=-1;
    s.arr=(int*)malloc(s.size*sizeof(int));
    s.top++;
    s.top=1;
    s.top++;
    s.top=2;
    s.top++;
    s.top=3;
    s.top++;
    s.top=4;
    s.top++;
    s.top=5;
    peek(s,1);
    peek(s,2);
    peek(s,3);
    peek(s,4);
    peek(s,5);
   
    return 0;
}