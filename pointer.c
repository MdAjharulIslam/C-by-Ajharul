#include<stdio.h>
int main(){

int *p;

int q;

 q =100;

p=&q;


printf("the value of p = %d\n",q);

printf("the address of q = %d\n",p);

printf("the value of q = %d\n",*p);

printf("the address of p = %d\n",&p);



return 0;
}
