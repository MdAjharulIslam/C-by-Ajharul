#include<stdio.h>
int main(){
    char a[100];
    scanf("%s",a);
    int len=0;
    while(a[len]!='\0'){
        len++;
    }
    for(int i=0;i<len;i++){
        printf("%c : %d\n",a[i],a[i]);
    }


return 0;
}
