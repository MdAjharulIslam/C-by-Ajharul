#include<stdio.h>
int main(){
    char a[50];
    gets(a);
    int len = 0;
    int flag = 1;
    for(int i=0;a[i] !='\0';i++){
        len++;
    }
    for(int j=0;j<len;j++){
        if(a[j]!='0' && a[j]!='1'){
            flag = 0;
            break;
        }
    }
    if(flag==1){
        printf("Binary\n");
    }else{
        printf("Not Binary\n");
    }


return 0;
}
