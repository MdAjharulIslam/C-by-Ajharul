#include<stdio.h>
int main(){
    char a[30];
    gets(a);
    int len=0;
    for(int i=0;a[i] !='\0';i++){
        len++;
    }if(a[len-2] == 'e' && a[len-1]=='r'){
        a[len-1]= 's';
        a[len]= 't';
        a[len+1]= '\0';
        printf("%s\n",a);
    }else if(a[len-3]=='e' && a[len-2]=='s' && a[len-1]=='t'){
        printf("%s\n",a);
    }else if(len>3){
        a[len]='e';
        a[len+1]='r';
        a[len+2]='\0';
        puts(a);
    }else if(len<4){
        puts(a);
    }
return 0;
}
