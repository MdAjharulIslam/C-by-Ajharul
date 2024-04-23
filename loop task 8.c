#include<stdio.h>
int main(){

int a,b;
printf("enter the value of a = ");
scanf("%d",&a);

for(int i=1;i<=a;i++){

    if(i%7==0){
        b+=i;
    }
}


printf("%d%d\n",b);



return 0;
}
