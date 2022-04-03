#include<stdio.h>
#include<stdlib.h>


struct stack{
    int size;
    int top;
    int *arr;
};


int  isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    return 0;
}


int  isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    return 0;
}


void push(struct stack *ptr,int n){
    if(ptr->top==ptr->size-1){
        printf("stack is over-flow");
        
    }
    ptr->top++;
    ptr->arr[ptr->top]=n;
    
}


int pop(struct stack *ptr){
     if(ptr->top==-1){
         printf("stack is under flow");
       
    }    
    int val;
     val=ptr->arr[ptr->top];
    ptr->top--;
    return val;

}


int peek(struct stack* sp, int i){
    int arrayInd = sp->top -i + 1;
    if(arrayInd < 0){
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else{
        return sp->arr[arrayInd];
    }
}

// int peek(struct stack *ptr;int n){
//      if(ptr->top==-1){
//          printf("stack is under flow");
//         return 1;
//     }   
//     return ptr->arr[n-1];

// }
// this code written for checking easy solution 


void bottom(struct stack *ptr){
    if(ptr->top==-1){
         printf("stack is under flow");
       
    }
     printf("bottom element of stack",ptr->arr[0]);
}


void top(struct stack *ptr){
    if(ptr->top==ptr->size-1){
         printf("stack overflow");
       
    }
     printf("top most  element of stack",ptr->arr[ptr->top]);
}


int main(){
    struct stack *a1;
    a1->size=5;
    a1->top=-1;
    a1->arr=(int*)malloc(a1->size*sizeof(int));
    return 0;
 }