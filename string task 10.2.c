#include<stdio.h>
int main()
{
    char m[768];
    gets(m);
    int L=0;
    for(int i=0;m[i]!=',';i++)
    {
        L=L+1;
    }
    int x=L;
    int l=strlen(m);
    for(int j=0;j<l;j++)
    {
        printf("%c",m[j]);


    if(m[j]!='\0')

        {
            printf("%c",m[L+1+j]);
        }
         if(j==x-1)
         {
              break;
         }


    }
    return 0;
}
