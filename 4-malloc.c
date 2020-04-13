#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *ptr;
    int n;

    n = 5;

    // Dynamically allocate memory using malloc()
    ptr = (int *)malloc(n * sizeof(int));
    printf("The value of ptr is: %p\n", ptr);

    if (ptr == NULL){
        /* Error al intentar reservar memoria */
        printf("Ups");
        exit(0);
    }

    return 0;
}