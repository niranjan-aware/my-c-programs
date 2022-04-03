// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <stdbool.h>

// struct node {
//    int data;
//    int key;
	
//    struct node *next;
//    struct node *prev;
// };

// //this link always point to first Link
// struct node *head = NULL;

// //this link always point to last Link 
// struct node *last = NULL;

// struct node *current = NULL;

// //is list empty
// bool isEmpty() {
//    return head == NULL;
// }

// int length() {
//    int length = 0;
//    struct node *current;
	
//    for(current = head; current != NULL; current = current->next){
//       length++;
//    }
	
//    return length;
// }

// //display the list in from first to last
// void displayForward() {

//    //start from the beginning
//    struct node *ptr = head;
	
//    //navigate till the end of the list
//    printf("\n[ ");
	
//    while(ptr != NULL) {        
//       printf("(%d,%d) ",ptr->key,ptr->data);
//       ptr = ptr->next;
//    }
	
//    printf(" ]");
// }

// //display the list from last to first
// void displayBackward() {

//    //start from the last
//    struct node *ptr = last;
	
//    //navigate till the start of the list
//    printf("\n[ ");
	
//    while(ptr != NULL) {    
	
//       //print data
//       printf("(%d,%d) ",ptr->key,ptr->data);
		
//       //move to next item
//       ptr = ptr ->prev;
      
//    }
	
// }

// //insert link at the first location
// void insertFirst(int key, int data) {

//    //create a link
//    struct node *link = (struct node*) malloc(sizeof(struct node));
//    link->key = key;
//    link->data = data;
	
//    if(isEmpty()) {
//       //make it the last link
//       last = link;
//    } else {
//       //update first prev link
//       head->prev = link;
//    }

//    //point it to old first link
//    link->next = head;
	
//    //point first to new first link
//    head = link;
// }

// //insert link at the last location
// void insertLast(int key, int data) {

//    //create a link
//    struct node *link = (struct node*) malloc(sizeof(struct node));
//    link->key = key;
//    link->data = data;
	
//    if(isEmpty()) {
//       //make it the last link
//       last = link;
//    } else {
//       //make link a new last link
//       last->next = link;     
      
//       //mark old last node as prev of new link
//       link->prev = last;
//    }

//    //point last to new last node
//    last = link;
// }

// //delete first item
// struct node* deleteFirst() {

//    //save reference to first link
//    struct node *tempLink = head;
	
//    //if only one link
//    if(head->next == NULL){
//       last = NULL;
//    } else {
//       head->next->prev = NULL;
//    }
	
//    head = head->next;
//    //return the deleted link
//    return tempLink;
// }

// //delete link at the last location

// struct node* deleteLast() {
//    //save reference to last link
//    struct node *tempLink = last;
	
//    //if only one link
//    if(head->next == NULL) {
//       head = NULL;
//    } else {
//       last->prev->next = NULL;
//    }
	
//    last = last->prev;
	
//    //return the deleted link
//    return tempLink;
// }

// //delete a link with given key

// struct node* delete(int key) {

//    //start from the first link
//    struct node* current = head;
//    struct node* previous = NULL;
	
//    //if list is empty
//    if(head == NULL) {
//       return NULL;
//    }

//    //navigate through list
//    while(current->key != key) {
//       //if it is last node
		
//       if(current->next == NULL) {
//          return NULL;
//       } else {
//          //store reference to current link
//          previous = current;
			
//          //move to next link
//          current = current->next;             
//       }
//    }

//    //found a match, update the link
//    if(current == head) {
//       //change first to point to next link
//       head = head->next;
//    } else {
//       //bypass the current link
//       current->prev->next = current->next;
//    }    

//    if(current == last) {
//       //change last to point to prev link
//       last = current->prev;
//    } else {
//       current->next->prev = current->prev;
//    }
	
//    return current;
// }

// bool insertAfter(int key, int newKey, int data) {
//    //start from the first link
//    struct node *current = head; 
	
//    //if list is empty
//    if(head == NULL) {
//       return false;
//    }

//    //navigate through list
//    while(current->key != key) {
	
//       //if it is last node
//       if(current->next == NULL) {
//          return false;
//       } else {           
//          //move to next link
//          current = current->next;
//       }
//    }
	
//    //create a link
//    struct node *newLink = (struct node*) malloc(sizeof(struct node));
//    newLink->key = newKey;
//    newLink->data = data;

//    if(current == last) {
//       newLink->next = NULL; 
//       last = newLink; 
//    } else {
//       newLink->next = current->next;         
//       current->next->prev = newLink;
//    }
	
//    newLink->prev = current; 
//    current->next = newLink; 
//    return true; 
// }

// void main() {
//    insertFirst(1,10);
//    insertFirst(2,20);
//    insertFirst(3,30);
//    insertFirst(4,1);
//    insertFirst(5,40);
//    insertFirst(6,56); 

//    printf("\nList (First to Last): ");  
//    displayForward();
	
//    printf("\n");
//    printf("\nList (Last to first): "); 
//    displayBackward();

//    printf("\nList , after deleting first record: ");
//    deleteFirst();        
//    displayForward();

//    printf("\nList , after deleting last record: ");  
//    deleteLast();
//    displayForward();

//    printf("\nList , insert after key(4) : ");  
//    insertAfter(4,7, 13);
//    displayForward();

//    printf("\nList  , after delete key(4) : ");  
//    delete(4);
//    displayForward();
// }
// #include <stdio.h>

// int main(void) {
// 	// your code goes here
// 	int n1,n2,sum,diff;
// 	scanf("%d",&n1);
// 	scanf("%d",&n2);
// 	if(n1>n2){
// 	    diff=n1-n2;
// 	    printf("%d\n",diff);
// 	}
// 	else{
// 	    sum=n1+n2;
// 	     printf("%d\n",sum);
// 	}
// 	return 0;
// // }
// #include <stdio.h>
// #include <stdlib.h>

// int main(void) {
// 	// your code goes here
// 	int n,k=1;
// 	long long int a=0,max,b;
// 	scanf("%d",&n);
// 	int *arr;
// 	arr=(int*)malloc(n*sizeof(int));
// 	for(int i=0;i<n;i++){
//       printf("enter num");
// 	    scanf("%d\n",&arr[0]);
// 	}
// 	for(int i=0;i<n;i++){
// 	    for(int j=i+1;j<n;j++){
// 	        if(arr[i]>arr[j]){
// 	             a=arr[i];
// 	            arr[i]=arr[j];
// 	            arr[j]=a;
// 	        }
// 	    }
// 	}
// 	max=arr[0]*n;
//    for (int i=0;i<n;i++){
//       printf("i=%d",arr[i]);
//    }
// 	for(int i=n-1;i>0;i--){
// 	    b=arr[k]*i;
// 	    if(max<b){
// 	        max=b;
// 	    }
// 	    k++;
	    
// 	}
// 	printf("%lld\n",max);
	
// 	return 0;
// }
// #include <stdio.h>
// void solve(){
//     int long long n,ans=0,den[6]={100,50,10,5,2,1,};
// 	printf("enter the value of n");
//     scanf("%lld",&n);
// 	for(int i=0;i<6;i++){
// 	    ans+=(n/den[i]);
// 	    n-=(den[i])*(n/den[i]);
// 	}
// 	printf("%lld\n",ans);
//   }	
	
// int main(void) {
// 	// your code goes here
// 	long  int t;
// 	printf("enter the value of t");
// 	scanf("%lld",&t);
// 	printf("*%d*",t);
// 	for(long int i=0;i<t;i++){
// 		printf("*****");
// 	    solve();
// 	}
// 	return 0;
// // }
// #include <stdio.h>
// #include <math.h>

// void solve(){
//      long int ans=0,arr[12],p;
// 	for(int i=11;i>=0;i--){
// 	    arr[i]=pow(2,i);
// 		printf("%d\n",arr[i]);
// 	}
// 	scanf("%ld",&p);
// 	for(int i=0;i<12;i++){
// 	    ans+=(p/arr[i]);
// 	    p-=(100)*(p/arr[i]);
// 		printf("%ld",p);
// 	}
// 	printf("%ld\n",ans);
	
// }

// int main(void) {
// 	int t;
// 	scanf("%d",&t);
// 	for(int i=0;i<t;i++){
// 	    solve();
// 	}

// 	return 0;
// // }
// #include<stdio.h>

// int main()
// {
//     char a[6];
//   	for(int i=0;i<5;i++){
//   	    printf("enter char\n");
// 	    scanf("%c",&a[i]);
//   	}
//   	for(int i=0;i<5;i++){
//   	    printf("%c\n",a[i]);
//   	}

//     return 0;
// }


//  #include<iostream>
//  using namespace std ;

//  int main(){
//      int n,k,count=0;
//       int z=0;
//      cin>>n;
//      cin>>k;
//      int a[n],p;
//      p=n*2;
//      int s[p];
//      for(int i=0;i<n;i++){
//          cin>>a[i];
//      }
//      for(int i=0;i<n;i++){
//          cout<<a[i]<<endl;
//      }
//      cout<<k;
//      for(int i=0;i<p;i=i+2){
        
//          s[i]=a[z]-k;
//          s[i+1]=a[z]+k;
//          z++;

//      }
     
//      for(int i=0;i<p;i++){
//          cout<<"**"<<s[i]<<endl;
//      }
//      for(int x=0;x<p;x=x+2){
//          for(int i=0;i<n;i++){
//              if(s[x]<=a[i]<=a[x+1]){
//                  count++;
//                  break;
//              }

//          }
//      }
//      cout<<count<<endl;
//  }


// #include <stdio.h>
// #include <stdlib.h>


// void scan(long long int *a,int n){
//     for(int i=0;i<n;i++){
// 	    scanf("%lld",&a[i]);
// 	}
	
// }


// void sort(long long int *a,int n){
//     int temp,indexmin;
//     for(int i=0;i<n-1;i++){
//         indexmin=i;
//         for(int j=i+1;j<n;j++){
//             if(a[j]<a[indexmin]){
//                 indexmin=j;
//             }
//         }
//         temp=a[i];
//         a[i]=a[indexmin];
//         a[indexmin]=temp;
//     }
// }


// void maxnum(long long int *a,long long int *m,int n){
//     int maxnumber=0,k=n;
//     for(int i=0;i<n;i++){
//         m[i]=a[i]*k;
//         k--;
		
//     }
//     for(int j=0;j<n-1;j++){
//         if(m[maxnumber]<m[j+1]){
//             maxnumber=j+1;
//         }
//     }
//     printf("%lld\n",m[maxnumber]);
    
// }



// int main(void) {
// 	// your code goes here
// 	int n;
// 	scanf("%d",&n);
//     long long int a[n],m[n];
//     scan(a,n);
//     sort(a,n);
// 	maxnum(a,m,n);
// 	return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>


// void scan(int *N,int n){
//     for(int i=0;i<n;i++){
//         scanf("%lld",&N[i]);
//     }
// }

// void check(int *N,int n){
//     int count =0,p,k=1;
//     for(int i=0;i<n-1;i++){
//         for(int j=k;j<n;j++){
//             p=N[i]+N[j];
//             if(p<k){
//                 count++;
//             }
//         }
//         k++;
//     }
//     printf("%d\n",count);
// }


// int main(void) {
// 	// your code goes here
// 	long long int n,k;
// 	scanf("%lld %lld",&n,&k);
// 	long long int *N;
// 	N=(int*)malloc(n*sizeof(int));
// 	scan(N,n);
// 	check(N,n);
// 	return 0;
// }

