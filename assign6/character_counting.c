#include <stdio.h>
#include "functions.h"

main() {
    long nc;

    nc = 0;

    while (my_getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}

