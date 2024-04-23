#include<stdio.h>
int main(){

int a;
printf("enter the value of a = ");
scanf("%d",&a);
if (a%2==0&&a%5==0){
    printf("%d",a);
}
else{
    printf("not multiple of 2 amd 5 both");
}



return 0;
}
