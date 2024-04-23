
#include <stdio.h>

int main() {
    int a, b =0;

    printf("enter 5 numbers of a:\n");


    for (int i = 0; i < 5; i++) {
        scanf("%d", &a);
        b += a;
        printf("%d\n", b);
    }

    return 0;
}
