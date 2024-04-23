#include<stdio.h>
int main(){
int a,b;
printf("enter the value of a and b = ");

scanf("%d%d",&a,&b);

int c=(a*120+b*75);

if(c<299 && c>0){
    printf("previous total : %d\n",c);
    printf("new total after discount :%d\n",c);
}
else if (c<=300 && c>=499){
     printf("previous total : %d\n",c);
     printf("new total after discount :%d\n",c-10);

}
else if(c<=500 && c>=749) {
    printf("previous total : %d\n",c);
    printf("new total after discount :%d\n",c-20);

        }
   else if(c<=750 && c>=999){

    printf("previous total : %d\n",c);


   }
   else if(c>=100){

    printf("previous total : %d\n",c);
    printf("new total after discount :%d\n",c-150);
   }

return 0;
}
