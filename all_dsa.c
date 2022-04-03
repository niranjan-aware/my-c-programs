#include<stdio.h>
#include<stdlib.h>


struct node {
    int data;
    struct node *next;
};


void LinledListTraversal(struct node *head){
    struct node *ptr=head;
    while(ptr->next!=0){
        printf("%d",ptr->next);
    }
    ptr=ptr->next;
}


struct node *InsertAtFirst(struct node *head,int data){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=data;
    ptr->next=head;
    return head;

}


struct node *InserAtEnd(struct node head*,int data){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=data;
    struct node ptr*=head
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=p;
    p->next=NULL;
    return head;
}


struct node *InsertAtIndex(struct node *head,int data,int index){
    struct node ptr*=head;
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    for(int i=0;i<index;i++){
        ptr->next=ptr->next;
    }
    p->data=data;
    p->next=ptr->next;
    ptr->next=p;
    return head;
}


struct node *DeleteAtFirst(struct node *head){
    struct node *ptr=head;
    ptr->head=ptr->next;
    free(p);
    return head;
}


struct node *DeleteAtEnd(struct node *head){
    struct node *ptr=head;
    struct node *q=head->next;
    while(q->next!=0){
        ptr=ptr->next;
        q=q->next;
    }
    ptr->next=NULL;
    free(q);
    return head;
}


struct node *DeleteAtIndex(struct node*head,int index){
    struct node *ptr=head;
    struct node *q=head->next;
    for(int i=0;i<index-1;i++){
        ptr=ptr->next;
        q=q->next;
    }
    ptr->next=q->next;
    free(q);
    return head;
}


struct node *DeleteByValue(struct node *head, int value){
    struct node *p = head;
    struct node *q = head->next;
    while(q->data!=value && q->next!= NULL)
    {
        p=p->next;
        q=q->next;
    }
    
    if(q->data==value){
        p->next=q->next;
        free(q);
    }
    return head;
}


//stack functions


struct node{
    int size;
    int top;
    int *arr;
};


int IsFull(struct node *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    return 0;
}


int IsEmpty(struct node *ptr){
    if(ptr->top==0){
        return 1;
    }
    return 0;
}


void push(strcut node *ptr,int value){
    if(IsFull){
        printf("Stack Is Overflow");
    }
    ptr->top++;
    ptr->arr[ptr->top]=value;
}


int Pop(struct node *ptr){
    if(IsEmpty){
        printf("Stack Is Under-Flow");
    }
    int value=ptr-arr[ptr->top];
    ptr->top--;
    return value;
}


int peek(struct node *ptr,int index){

}


int StackTop(struct node *ptr){
     if(IsEmpty){
        printf("Stack Is Under-Flow");
    }
    printf("%d",ptr->arr[ptr->top]);
}


int StackBottom(struct node *ptr){
     if(IsEmpty(ptr)){
        printf("Stack Is Under-Flow");
    }
    printf("%d",ptr->arr[0]);
}


//stack using linked list



//parenthesis matching 


struct stack{
    int top;
    int size;
    char *str;
};


int ParenthesisMatching(char *a){
    struct stack *ptr;
    ptr->size=x/*take the value of req*/;
    ptr->top=-1;
    ptr->arr=(char*)maalloc(ptr->size*sizeof(char));
    for(int i=0;i<n;i++){
             if(a[i]='('){
                 push();
             }
             else if(')'){
                 if(IsEmpty(ptr)){
                     return 0;
                 }
                 pop();
             }
    }
    if(IsEmpty(ptr)){
        return 1;
    }
    return 0;
    

}


//multiple parenthesis matching


struct stack{
    int size;
    int top;
    char *str;
};


int match(char a, char b){
    if(a=='{' && b=='}'){
        return 1;
    }
    if(a=='(' && b==')'){
        return 1;
    }
    if(a=='[' && b==']'){
        return 1;
    }
  return 0;  
}


int MultipleParenthesisMatching(char *a){
     struct stack *ptr;
    ptr->size=x/*take the value of req*/;
    ptr->top=-1;
    ptr->arr=(char*)maalloc(ptr->size*sizeof(char));
    for(int i=0;i<n;i++){
        if(a[i]=='('||a[i]=='{'||a[i]=='['){
            push();
        }
        else if(a[i]==')'||a[i]=='}'||a[i]==']'){
            if(IsEmpty){
                return 0;
            }
                  popped_ch = pop(sp);
            if(!match(popped_ch, exp[i])){ 
              return 0;  
            }
    }
     if(IsEmpty(ptr)){
        return 1;
    }
    return 0;

}


//implementing stack  using linked list


struct node{
    int data;
    struct node *next;
};


