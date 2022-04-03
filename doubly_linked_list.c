#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *next;
    struct node *prev;
};


void traversal(struct node *ptr ){
    printf("hello");
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}


int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    traversal(NULL);
    head->data=1;
    head->prev=NULL;
    head->next=second;

    second->data=1;
    second->prev=head;
    second->next=third;

    third->data=1;
    third->prev=second;
    third->next=fourth;

    fourth->data=1;
    fourth->prev=third;
    fourth->next=NULL;

    traversal(head);

    return 0;
}