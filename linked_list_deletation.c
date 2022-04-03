#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};


void traversal(struct node*ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}


// struct node *deleteFirst(struct node *head){
//   //struct node *ptr=(struct node*)malloc(sizeof(struct node));
//   struct node*ptr=head;
//   head=head->next;
//    free(ptr);
//   return head;

// }


// struct node *deleteLast(struct node *head){
//     struct node *ptr=head;
//     struct node *p=head->next;
//     while(p->next!=NULL){
//        ptr=ptr->next;
//        p=p->next;
//     }
//     ptr->next=NULL;
//     free(ptr);
//     return head;
// }


// struct node * deleteLast(struct node * head){
//     struct node *p = head;
//     struct node *q = head->next;
//     while(q->next !=NULL)
//     {
//         p = p->next;
//         q = q->next;
//     }
    
//     p->next = NULL;
//     free(q);
//     return head;
// }


// struct node *deleteAtindex(struct node *head,int index){
//     struct node *p;
//     struct node *q;
//     for(int i=0;i<=index-1;i++){
//         p=p->next;
//         q=q->next;
//     }
//     p->next=q->next;
//     free(q);
//     return head;
// }


struct node * deleteAtIndex(struct node * head, int index){
    struct node *p = head;
    struct node *q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = q->next;
    free(q);
    return head;
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

    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=4;
    fourth->next=NULL;
    // insertAtindex(head,2);
    traversal(head);
   // head=deleteFirst(head);
   // printf("after deletation\n");
   //head=deleteLast(head);
   //printf("after deletation\n");
   head=deleteAtIndex(head,2);
   printf("after deletation\n");
    traversal(head);
    

    return 0;
}