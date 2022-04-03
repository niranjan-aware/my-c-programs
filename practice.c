// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int getSum(   int);
// void isDivisible(  long int,int);
// int count=0;
// int main(){
//     int n=10,k=50;

//     for(int i=1;i<=n;i++){
//         long   int temp = pow(i,i);
//         long int sum = getSum(temp);
//         printf("power= %d\t sum=%d\n",temp,sum);
//         isDivisible(sum,k);
//     }

//     printf("\n*****count is %d*****",count);
//     return 0;
// }
// void isDivisible(long int sum,int k){
//     if(sum%k == 0)
//         ++count;
// }
// int getSum(int num){
//    long int sum=0;
//    int rem;
//     while(num!=0){
//         rem = num%10;
//         sum = sum + rem;
//         num = num/10;
//     }

//     return sum;
// }