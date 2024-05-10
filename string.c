#include<stdio.h>
int main(){

char a[100];
gets(a);
char ch;
int len=0;
for(int i=0;a[i]!='0';i++){
    len++;
}
for(int i=0;i<=len;i++){

    if (a[i]==ch){
        continue;
    }

    printf("%c",a[i]);
    ch=a[i];
}
printf("\n");



return 0;
}
