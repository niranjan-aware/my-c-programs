#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *next;
};


struct node * insertAtFirst(struct node *first,int data){
   struct node * ptr=(struct node*)malloc(sizeof(struct node));
     ptr->next=first;
    ptr->data=data;
   
    return ptr;
}
void traversal();


int main(){
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    first->data=1;
    first->next=second;
    
    second->data=2;
    second->next=third;
    
    third->data=3;
    third->next=fourth;
    
    fourth->data=4;
    fourth->next=NULL;

    traversal(first);

    // insertatfirst(first,11);
    //fourth=insertatlast(first,99);
  
    first=insertAtFirst(first,99);
      traversal(first);


    return 0;
}

void traversal(struct node*ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}


// struct node* insertatfirst(struct node*first,int data){
//     struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
//     ptr->data=data;
//     ptr->next=first;
//     return ptr;

// }
