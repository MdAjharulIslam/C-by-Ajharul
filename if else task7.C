#include<stdio.h>
int main(){


int a;

printf("enter the value of a = ");
scanf("%d",&a);
 if(a%2==0&&a%5==0){
    printf("multiple of 2 and 5 both");
}
else if(a%2==0||a%5==0){
    printf("%d",a);
}

else{
    printf("not a multiple we want");
}


return 0;
}
