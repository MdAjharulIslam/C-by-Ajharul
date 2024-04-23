#include<stdio.h>
int main(){

int number[5];

printf("enter 5 number");

for (int i=0;i<5;i++)
{
    scanf("%d",&number[i]);
}

printf("printing value from the array in reverse order:\n");

for(int i=5-1;i>=0;i--){

    printf("%d\n",number[i]);
}


return 0;
}
