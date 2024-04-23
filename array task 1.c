#include <stdio.h>

int main() {

    int numbers[5];

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
        printf("Numbers in the array:" );
        for (int j = 0; j <= i; j++) {
            printf("%d", numbers[j]);



                printf(", ");


        }

    }

    return 0;
}
