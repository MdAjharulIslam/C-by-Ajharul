#include<stdio.h>
int main(){

int distance,seconds;
printf("enter the value of distance and seconds = ");
scanf("%d%d",&distance,&seconds);

double velocity;
velocity=((distance/1000)/(seconds/3600));

printf("%lfkm/h\n",velocity);
if(velocity<60){
    printf("to slow.needs more changes");
}
else if (velocity<=90 && velocity>=60){
    printf("velocity is okey.the car is ready");
}

else {
    printf("to fast.only a few change should suffice");
}


return 0;
}
