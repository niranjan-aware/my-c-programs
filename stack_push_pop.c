// #include<stdio.h>
// #include<stdlib.h>


// struct stack{
//     int size;
//     int top;
//     int *arr; 
// };


// void traversal(struct stack k){
//     for(int i=0;i<=k.top;i++){
//         printf("%d\n",k.arr[i]);
//     }
// }


// int isEmpty(struct stack m){
//     if(m.top==-1){
//         return 1;
//     }
//        return 0;
    
// };


// int isFull(struct stack m){
//     if(m.top==m.size-1){
//         return 1;
//     }
//        return 0;
    
// };


// // void push(struct stack m,int value){
// //    if(isFull(m)){
// //        printf("stack overflow!");
// //    }
// //    else{
// //     m.top++;
// //     m.arr[m.top]=value;
// //    }
// // }


// void push(struct stack ptr, int val){
//     if(isFull(ptr)){
//         printf("Stack Overflow! Cannot push %d to the stack\n", val);
//     }
//     else{
//         ptr.top++;
//         ptr.arr[ptr.top] = val;
//     }
// }


// int main(){
//     struct stack s;
//     s.size=5;
//     s.top=-1;
//     s.arr=(int *)malloc(s.size*sizeof(int));
//     s.top++;
//     s.arr[s.top]=2;
//     s.top++;
//     s.arr[s.top]=2;
//   //  printf("%d\n", s.arr[0]);
//     printf("%d\n",isEmpty(s));
//     printf("%d\n",isFull(s));
//     traversal(s);
//     push(s,15);
//     traversal(s);
//     return 0;
// }
#include<stdio.h>
#include<stdlib.h>
 
struct stack{
    int size ;
    int top;
    int * arr;
};
 
 
void traversal(struct stack *k){
    for(int i=0;i<=k->top;i++){
        printf("%d\n",k->arr[i]);
    }
}

int isEmpty(struct stack* ptr){
    if(ptr->top == -1){
            return 1;
        }
        else{
            return 0;
        }
}
 
int isFull(struct stack* ptr){
    if(ptr->top == ptr->size - 1){
        return 1;
    }
    else{
        return 0;
    }
}
 
void push(struct stack* ptr, int val){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
 
int pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
 
int main(){
    struct stack *sp = (struct stack *) malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *) malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully\n");
     traversal(sp);
        printf("Before pushing, Full: %d\n", isFull(sp));
    printf("Before pushing, Empty: %d\n", isEmpty(sp));
        push(sp, 1);
    push(sp, 23);
    push(sp, 99);
    push(sp, 75);
    push(sp, 3);
    push(sp, 64);
    push(sp, 57);
    push(sp, 46);
    push(sp, 89);
    push(sp, 6); // ---> Pushed 10 values 
    // push(sp, 46); // Stack Overflow since the size of the stack is 10
    printf("After pushing, Full: %d\n", isFull(sp));
    printf("After pushing, Empty: %d\n", isEmpty(sp));
  traversal(sp);
    return 0;
}
