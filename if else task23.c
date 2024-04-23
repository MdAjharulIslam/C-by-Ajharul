#include<stdio.h>
int main(){

int a;
printf("enter the value of a = ");
scanf("%d",&a);
double  celsius=(a-32)*0.56;
if(celsius<20){

    printf("%lf degree c\n",celsius);
    printf("winter");
}
else if(celsius>=20 && celsius<=25){

    printf("%lf degree c\n",celsius);
    printf("autumn");

}
else if (celsius>25 && celsius <30){

    printf("%lf degree c\n",celsius);
    printf("spring");
}
else if(celsius>=30){
    printf("%lf degree c\n",celsius);
    printf("summer");
}



return 0;
}
