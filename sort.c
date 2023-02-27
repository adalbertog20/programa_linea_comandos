#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int compare(const void* a, const void* b) {
    return strcmp(*(const char**)a, *(const char**)b);
}

char **sort_function(char *argv[], int n) {
    FILE *fptr;
    fptr = fopen("confrc", "w");
    if(fptr == NULL) {
        printf("ERROR");
        exit(1);
    }
    qsort(argv, n, sizeof(const char*), compare );

    for (int i = 1; i < n; i++)
        fprintf(fptr, "%s\n", argv[i]);

    return argv;
}
