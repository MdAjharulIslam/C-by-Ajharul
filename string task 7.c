#include<stdio.h>
int main(){
    char ch[100];
    gets(ch);
    int len=0;
    while(ch[len]!='\0'){
        len++;
    }
    for(int i=0;i<len;i++){
        if(ch[i]=='z'){
            printf("a");
        }else{
            printf("%c",ch[i]+1);
        }

    }


return 0;
}
