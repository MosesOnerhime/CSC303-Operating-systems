#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("hey");
    }


    int flag = 1;
    char name[20];

    while (flag == 1) {
        printf("\nPlease input your name: ");
        scanf("%s", name);
        puts("");
    }

    return 0;
}