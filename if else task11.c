#include<stdio.h>
int main(){

int s;
printf("enter the value of s = ");
scanf("%d",&s);
double c;
 if(s>=100){

c=12000/(4+(pow(s,2)/14900));
}


else if(s<100){

c=3000-125* pow(s,2);

}
printf("%lf",c);


return 0;
}
