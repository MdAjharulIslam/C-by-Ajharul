#include<stdio.h>
int main(){

double cgpa;
int credits;

printf("enter the value of cgpa and credits = ");

scanf("%lf %d",&cgpa , &credits);

if(credits>=30){

    if(cgpa==4.00){
        printf("the student is elegible for a waiver of 100 percents");
    }

    else if(cgpa>=3.90 && cgpa<=3.94){
        printf("the student is elegible for a waiver of 50 percents");
    }
    else if(cgpa>=3.95 &&cgpa<=3.99){
        printf("the student is elegible for a waiver of 75 percents");
    }
    else if(cgpa>=3.80 && cgpa<=3.89){
        printf("the student is elegible for a waiver of 25 percents");
    }


}
else {
    printf("the student is not elegible for a waiver");
}



return 0;
}
