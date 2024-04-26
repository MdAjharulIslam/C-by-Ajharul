
#include<stdio.h>
int main(){
    char a[100];
    char ch;
    gets(a);
    int len=0;
    while(a[len]!='\0'){
        len++;
    }
    for(int i=0;i<=len;i++){
        if(a[i] == ch){
            continue;
        }
        printf("%c",a[i]);
        ch=a[i];

    }

return 0;
}
