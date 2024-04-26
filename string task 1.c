#include<stdio.h>
int main(){
    char ch[30];
    gets(ch);
    int len=0;
    for( int i=0;ch[i] !='\0';i++){
        len++;
    }
    for(int j=len-1;j>=0;j--){
        printf("%c",ch[j]);
    }
return 0 ;
}
