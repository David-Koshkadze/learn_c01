#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000

void reverse(char s[]) {
    int i, j;
    char c;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

int main() {
    char line[MAX_LINE_LENGTH];

    while (fgets(line, MAX_LINE_LENGTH, stdin)) {
        reverse(line);
        printf("%s", line);
    }
    
    return 0;
}

