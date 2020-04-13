#include <stdio.h> 
#include <stdlib.h> 
  
int main() 
{ 

    int* ptr; 
    int n; 
  
    n = 100; 

    // Dynamically allocate memory using malloc()
    ptr = (int *)malloc(n * sizeof(int));
  

    if (ptr == NULL) { 
        /* Error al intentar reservar memoria */
        printf("Ups.\n"); 
        exit(0); 
    } 
    else { 
  
        printf("The value of ptr is: %p\n", ptr);

        ptr[100] = 0; 
        printf("The value of ptr[100] is: %d\n", ptr[100]);
        
    } 
  
    return 0; 
}