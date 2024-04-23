
#include <stdio.h>

int main() {
    int num, sum , a ;

    printf("Enter ten numbers: \n");

    for (int i = 0; i < 10; ++i) {
        scanf("%d", &num);
        if (num % 2 != 0) {
            sum += num;
            a++;
        }
    }

    if (a > 0) {
        printf("The total of the odd numbers is %d and their average is %1f\n", sum, (float)sum / a);
    } else {
        printf("No odd numbers were entered.\n");
    }

    return 0;
}
