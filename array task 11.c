#include <stdio.h>

int main() {
    int Array1[] = {1, 4, 3, 2, 6};

    int Array2[] = {5, 6, 9, 8, 7};

    int size1 = sizeof(Array1) / sizeof(Array1[0]);

    int size2 = sizeof(Array2) / sizeof(Array2[0]);

    int found = 0;



    for (int i = 0; i < size1; i++) {

        for (int j = 0; j < size2; j++) {

            if (Array1[i] == Array2[j]) {

                found = 1;

                break;
            }
        }
        if (found)

            break;
    }

    if (found){

        printf("True\n");

}
    else{

        printf("False\n");

}
    return 0;
}
