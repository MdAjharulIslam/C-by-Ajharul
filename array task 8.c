#include<stdio.h>
int main(){

int arr1[]={1,2,3,4,5,6,7,8,9};
int arr2[]={10,11,12,-13,-14,-15,-16};

printf("[ ");

for (int i=0;i<sizeof(arr1)/sizeof(arr1[0]);i++){

    if(arr1[i]%2==0){

        printf("%d",arr1[i]);

        if(i<sizeof(arr1)/sizeof(arr1[0])-1){

            printf(", ");
    }
}
}

for (int i=0;i<sizeof(arr2)/sizeof(arr2[0]);i++){

    if(arr2[i]%2==0){

        printf("%d",arr2[i]);

        if(i<sizeof(arr2)/sizeof(arr2[0])-1){

            printf(", ");

        }

    }
}


printf("]\n");





return 0;
}
