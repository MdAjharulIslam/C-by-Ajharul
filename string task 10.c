#include<stdio.h>
int main(){
    char a[100],b[100];
    char ch;
    gets(a);
    gets(b);
    int len=0;
    while(a[len]!='\0'){
        len++;
    }
    for(int i = 0;i<=len;i++){
        printf("%c",a[i]);
        if(b[i] !='\0'){
            printf("%c",b[i]);
        }

    }



return 0;
}
