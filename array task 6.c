#include <stdio.h>

int main() {
    int array[7];
    printf("enter the 7 numbers: ");

for(int i=0;i<7;i++){
    scanf("%d",&array[7]);

}

    int largest = array[0];
    int index = 0;

    for (int i = 1; i < 7; i++) {
        if (array[i] > largest) {
            largest = array[i];
            index = i;
        }
    }

    printf("My array: [");
    for (int i = 0; i < 7; i++) {
        printf("%d", array[i]);
        if (i < 6) printf(", ");
    }
    printf("]\n");

    printf("Largest number in the array is %d which was found at index %d.\n", largest, index);

    return 0;
}
