#include <stdio.h>

int main() {
    int arr1[] = {2, 4, 7};
    int arr2[] = {4, 9, 1};
    int *ptrarr1 = &arr1[0];

    printf("%i\n", *ptrarr1);

    for (int i = 0; i < 3; i++) {
        int sum = arr1[i] + arr2[i];
        printf("%i\n", sum);
    }

    return 0;
}