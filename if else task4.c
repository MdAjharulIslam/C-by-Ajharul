#include<stdio.h>
int main(){

int a,b;
printf("enter the value of a and b = ");
scanf("%d%d",&a,&b);

int c;
if(a>b){

    c=a-b;
}
else if(a<b){

    c=b-a;
}
else {
    printf("0");
}



printf("%d",c);

return 0;
}
