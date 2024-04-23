#include<stdio.h>
int main(){

int a;
printf("enter the value of a = ");
scanf("%d",&a);


int result1=a/3;
int result2=a%3;

printf("each friend recive chocolates = %d\n",result1);

printf("the number of remaing chocolates = %d\n",result2);

return 0;
}
