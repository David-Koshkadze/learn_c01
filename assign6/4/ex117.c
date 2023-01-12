#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000

// Program to print all input lines that are longer than 80 characters

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