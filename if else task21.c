#include<stdio.h>
int main(){
int a;
printf("enter the value of a = ");
scanf("%d",&a);

if(a%2 !=0 || a%5 !=0){

    printf("%d",a);
}
else{
    printf("No");
}




return 0;
}
