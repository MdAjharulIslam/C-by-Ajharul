
#include<stdio.h>

struct student
    {
        char n[20];
        int id;
    };


int main()
{
   struct student s1,s2,s3;

   scanf("%s",s1.n);
   scanf("%d",&s1.id);

   scanf("%s",s2.n);
   scanf("%d",&s2.id);

   scanf("%s",s3.n);
   scanf("%d",&s3.id);

   printf("\n%s\n%d\n",s1.n,s1.id);
   printf("\n%s\n%d\n",s2.n,s2.id);
   printf("\n%s\n%d\n",s3.n,s3.id);

    return 0;
}
