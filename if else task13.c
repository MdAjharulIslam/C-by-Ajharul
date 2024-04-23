-#include<stdio.h>
int main(){

int result;

printf("enter the value of result = ");

scanf("%d",&result);

if(result>=90 && result<=100){
    printf("A");
}
else if(result>=80 && result<=89){
    printf("B");
}
else if(result>=70 && result<=79){
    printf("C");
}
else if(result>=60 && result<=69){
    printf("D");
}
else if (result>=50 && result<=59){
    printf("E");
}
else {
    printf("F");
}




return 0;
}
