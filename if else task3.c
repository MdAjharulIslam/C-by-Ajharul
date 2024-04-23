#include<stdio.h>
int main(){

int a,b;
printf("enter the value of a and b = ");

scanf("%d%d",&a,&b);

if(a>b){
    printf("first is greater");
}
else if(a<b){
    printf("second is greater");
}
else {
    printf("the number is equal");
}
return 0;
}
