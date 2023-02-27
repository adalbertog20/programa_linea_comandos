#include <stdio.h>
#include "sort.c"

int main(int argc, char *argv[]) {
    FILE *fptr;
    fptr = fopen("confrc", "w");

    if (fptr == NULL) {
        printf("ERROR!");
        exit(1);
    }

    printf("Numero de argumentos: %d\n", (argc - 1));
    printf("Argumentos en ./confrc:\n");

    sort_function(argv ,argc);
}
