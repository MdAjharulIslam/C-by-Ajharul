#include <stdio.h>

int main() {
    int x = 5;
    int *ptr;
    ptr = &x;
    *ptr = 10;
    printf("%d\n", x);
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    printf("%d\n",&x);
    return 0;
}
