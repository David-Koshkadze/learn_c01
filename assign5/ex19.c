#include <stdio.h>

int main() {
    int c;

    int last_char_blank = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (!last_char_blank) {
                putchar(c);
            }
            last_char_blank = 1;
        } else {
            putchar(c);
            last_char_blank = 0;
        }
    }
}