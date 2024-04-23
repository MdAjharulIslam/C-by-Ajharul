#include<stdio.h>
int main(){

int time;
printf("enter the value of time = ");

scanf("%d",&time);

if(time>=4 && time<=6){
    printf("Breakfast");
}
else if(time>=12 && time<=13){
    printf("Lunch");
}
else if(time>=16 && time <=17){
    printf("Snacks");
}
else if(time>=19 && time<=20){
    printf("Dinner");
}
else if(time<0 || time>23){
    printf("wrong time");
}
else{
    printf("Patience is a vartue");
}





return 0;
}
