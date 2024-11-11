#include <stdio.h>
#include <ctype.h>

int main() {
    char input;
    printf("Enter a character (c), float (f), or integer (i): ");
    scanf(" %c", &input); // Reading input type (c, f, or i)

    switch (input) {
        case 'c': {
            char ch;
            printf("Enter a character: ");
            scanf(" %c", &ch);

            printf("Character: %c\n", ch);
            printf("ASCII Code: %d\n", ch);
            printf("Size of Character: %lu bytes\n", sizeof(ch));

            printf("Next four characters (multiples of 3):\n");
            for (int i = 1; i <= 4; i++) {
                char next_char = ch + (3 * i);
                printf("Character: %c, ASCII Code: %d\n", next_char, next_char);
            }
            break;
        }
        
        case 'f': {
            float fnum;
            printf("Enter a float number: ");
            scanf("%f", &fnum);

            printf("Float: %f\n", fnum);
            printf("Size of Float: %lu bytes\n", sizeof(fnum));

            printf("Next four floats (multiples of 3):\n");
            for (int i = 1; i <= 4; i++) {
                float next_float = fnum * (3 * i);
                printf("Float: %f\n", next_float);
            }
            break;
        }
        
        case 'i': {
            int inum;
            printf("Enter an integer: ");
            scanf("%d", &inum);

            printf("Integer: %d\n", inum);
            printf("Size of Integer: %lu bytes\n", sizeof(inum));

            printf("Next four integers (multiples of 3):\n");
            for (int i = 1; i <= 4; i++) {
                int next_int = inum * (3 * i);
                printf("Integer: %d\n", next_int);
            }
            break;
        }

        default:
            printf("Invalid input. Please enter 'c', 'f', or 'i'.\n");
            break;
    }

    return 0;
}

