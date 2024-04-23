#include<stdio.h>


int main() {
    int number;


    printf("Enter a number: ");
    scanf("%d", &number);



    for (; number != 0; number /= 10) {
        int digit = number % 10;
        printf("%d ", digit);
    }
    printf("\n");

    return 0;
}
