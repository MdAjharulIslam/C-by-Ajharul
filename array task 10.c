
#include <stdio.h>



int main() {
    int array[16];
    int size = 0;


    printf("Enter the  numbers : ");

        for(int i=0;i< sizeof(array[i])/sizeof(array[0]);i++ ){
            scanf("%d",&array[i]);

        }

    printf("Modified array: [%d", array[0]);
    for (int i = 1; i < size; i++) {
        int j;

        for (j = 0; j < i; j++) {
            if (array[i] == array[j]) {
                break;
            }
        }

        if (j == i) {
            printf(", %d", array[i]);
        }
    }
    printf("]\n");

    return 0;
}
