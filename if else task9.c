#include<stdio.h>
int main(){

int second;
printf("enter th evalue of second = ");
scanf("%d",&second);

int hour,minute;
hour=second/3600;

second %=3600;
minute = second/60;
second %=60;

printf("Hour : %d Minutes : %d Seconds : %d \n", hour, minute, second);


return 0;
}
