#include <stdio.h>

#define MAX_LINE_LENGTH 1000

int main() {
    char line[MAX_LINE_LENGTH];

    while (fgets(line, MAX_LINE_LENGTH, stdin)) {
        int line_length = strlen(line);
        if (line_length > 80) {
            printf("%s", line);
        }
    }

    return 0;
}