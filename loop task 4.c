#include<stdio.h>
int main(){

int sum;

for(int i=1;i<=600;i++){

    if((i%7 == 0 || i%9 == 0)&&  !(i%7 ==0 && i%9 == 0)){

    sum += i;
    }


}

printf("%d ",sum);

return 0;
}

