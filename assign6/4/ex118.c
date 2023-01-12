#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000

// Program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines

int main() {
    char line[MAX_LINE_LENGTH];
    int i;

    // char *fgets(char * restrict s, int n, FILE * restrict stream);
    while (fgets(line, MAX_LINE_LENGTH, stdin)) {  
        int line_length = strlen(line);

        // ამოვშალოთ მიყოლებითი ცარიელი ადგილები
        for (i = line_length - 1; i >= 0; i--) {
            if (line[i] == ' ' || line[i] == '\t' || line[i] == '\n') {
                line[i] = '\0';
            } else {
                break;
            }
        }

        // შევამოწმოთ არის თუ არა line ცარიელი
        
        if (strlen(line) > 0) {
            printf("%s\n", line);
        }
    }

    return 0;
}
