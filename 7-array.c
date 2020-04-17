#include <stdlib.h>
#include <stdio.h>

int main() {
  int *arr; 
  int *ptr;
  int n;

  // Crear arreglo
  n = 100;
  arr = (int *) malloc(n * sizeof(int));

  // Definir funny value a la mitad del arreglo
  ptr = arr + 50;
  free(ptr);

  return 0;
}