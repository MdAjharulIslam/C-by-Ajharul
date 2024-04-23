#include<stdio.h>
int main(){

int a;
printf("enter the value of a= ");
scanf("%d",&a);
if(a<0){
    printf("hour cannot be negative");
}
else if(a>168){
    printf("impossible to work more than 168 hours weekly");
}
else if(a<=40){
    printf("%d",a*200);
}

else if(a>40){
    printf("%d",8000+(a-40)*300);
}


return 0;
}
