#include <stdio.h>

int main() {
    int num, a = 1;
    printf("enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        a = 0;
    } else {
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                a = 0;
                break;
            }
        }
    }

if (a) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}
