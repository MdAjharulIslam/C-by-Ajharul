
#include <stdio.h>

int main() {
    int number;
    int b;


    printf("enter a number: ");
    scanf("%d", &number);


    for (b = 0; number != 0; b++) {
        number = number / 10;
    }


    printf("number of digits: %d\n",b);

    return 0;
}
