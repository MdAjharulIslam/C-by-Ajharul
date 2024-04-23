#include<stdio.h>
int main(){

int p=5;

int q=6;
int r=9;
int sum=0;

if(p<12){

    printf("%d\n",r+2);
}
else{
    printf("%d\n",r+p);
}

if(q>20){

    printf("%d\n",r+19);
}
else if (q<=6){
    printf("%d\n",q+3);
}
else {
    printf("%d\n",p+q+r);
}
if(r>15){
    printf("%d\n",r);
}
else if(r==0){

    printf("%d\n",p+q);
}
else {
    printf("%d\n",p);
}
if(sum != 0){

    printf("%d\n",3);
}
else{
    printf("%d\n",sum+32);
}

if(p>0 && r<10){
    printf("%d\n",p+r);
}
else{
    printf("%d\n",p-r);
}

return 0;
}
