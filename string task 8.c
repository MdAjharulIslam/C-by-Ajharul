#include<stdio.h>
int main(){
    char ch[100];
    gets(ch);
    int len=0;
    while(ch[len]!='\0'){
        len++;
    }
    for(int i=1;i<len;i=i+2){
        printf("%c",ch[i]-32);
    }
return 0;
}
