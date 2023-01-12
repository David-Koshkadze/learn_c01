#include <stdio.h>

int main() {
    int new_lines = 0;
    int tabs = 0;
    int blanks = 0;

    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++new_lines;
        }
        else if (c == '\t') {
            ++tabs;
        } 
        else if (c == ' ') {
            ++blanks;
        }
    }

    printf("New lines: %d\nTabs: %d\nBlanks: %d\n", new_lines, tabs, blanks);
}


// int main() {
//     int c, nl;

//     while ((c = getchar()) != EOF) {
//         if (c == '\n') {
//             ++nl;
//         }
//     }
//     printf("New lines: %d\n", nl);
// }