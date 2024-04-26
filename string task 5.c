#include<stdio.h>
int main(){
    char ch[100];
    gets(ch);
    int len=0;
    while(ch[len] !='\0'){
        len++;
    }
    for( int i=0;i<len;i++){
        for(int j=0;j<=i;j++){
            printf("%c",ch[j]);
        }
        printf("\n");
    }


return 0;
}
