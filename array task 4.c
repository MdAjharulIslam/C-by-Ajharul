
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    printf("Given array:\n[");

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {

        printf("%d", arr[i] * arr[i]);

        if (i <(sizeof(arr)/sizeof(arr[0]) )-1) {

            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
