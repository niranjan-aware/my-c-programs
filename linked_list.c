#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next; 
};

void traversal(struct node *ptr){
    while(ptr!=0){
    printf("%d\n",ptr->data);
    ptr=ptr->next;
}
}



int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    head->data=2;
    head->next=second;
    
    second->data=3;
    second->next= third;
    
     third->data=4;
     third->next=fourth;
    
    fourth->data=2;
    fourth->next=NULL;
    traversal(head);

    return 0;
}