#include<stdio.h>
int main(){

int arr1[]={1,4,7,5};
int arr2[]={6,1,3,9};

arr1[sizeof(arr1)/sizeof(arr1[0])-1]=arr2[0];
printf("[");

for(int i=0;i<sizeof(arr1)/sizeof(arr1[0]);i++){

    printf("%d",arr1[i]);

    if(i<sizeof(arr1)/sizeof(arr1[0])-1){

        printf(", ");
    }

}

for (int i=1;i<sizeof(arr2)/sizeof(arr2[0]);i++){

    printf(", %d",arr2[i]);

}
printf("]\n");


return 0;
}


