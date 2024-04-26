#include<stdio.h>
int main(){
    char ch[30];
    int a;
    gets(ch);
    scanf("%d",a);
    int len=0;
    for(int i=0;ch[i] !='\0';i++){
        len++;
    }
    for(int i=a;i>=0;i--){
        printf("%c",ch[i]);
    }
    for(int i=a+1;i<=len;i++){
        printf("%c",ch[i]);
    }


return 0;
}
