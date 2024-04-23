
#include<stdio.h>
int main(){
int arr[]={7,12,4,55,26,2,11,61,33,42};

printf("original array:");
printf("[");
for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){

  printf(" %d",arr[i]);
 if(i<sizeof(arr)/sizeof(arr[0])-1){

  printf(", ");

  }
}
printf(" ]\n");

printf("\n");

printf("modified array: ");

printf("[");

for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){

  if(arr[i]%2 !=0){

  printf(" %d",arr[i]);

  if(i<sizeof(arr)/sizeof(arr[0])-1){

  printf(", ");

  }

  }

}

printf("]\n");


return 0;
}
