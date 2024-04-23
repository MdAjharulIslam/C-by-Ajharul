#include<stdio.h>
int main(){

int m,n;

printf("enter the value of m =");
scanf("%d",&m);
printf("enter the value of n =");
scanf("%d",&n);

 int ans = pow(m,n);

printf("%d ^%d: %d",m,n,ans);

return 0;
}
