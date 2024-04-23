#include<stdio.h>
int main(){

int a,b,c;
float d;

printf("enter the value of a,b,c and d");
scanf("%d%d%d%f",&a,&b,&c,&d);

int result1=pow(a,c);
int result2=result1+b*a-((int)d/3);

printf("result=%d",result2-1);


return 0;
}
