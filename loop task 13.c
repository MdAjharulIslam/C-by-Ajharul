
#include <stdio.h>

int main() {
    int a, b = 0;


    printf("enter the value of a = : ");
    scanf("%d", &a);


    printf("b:\n");
    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            printf("%d\n", i);
            b++;
        }
    }


    printf("Total %d divisors\n", b, b);

    return 0;
}
