#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>

int main() {
  int *ptr, i, cont, input;
  bool flag = true;
 
  ptr = (int*)malloc(1*sizeof(int));
  i = 0;
  cont = 1;

  while(i< cont && flag == true ){
    printf("Vector de %d posiciones\n", cont);
    printf("Ingrese un dato para la posición %d ó 0 para terminar: \n", i);
    scanf("%d", &input);
    if (input == 0) {
      *(ptr + i) = input;
      flag = false;
    } else {
      *(ptr + i) = input;
      cont++;            
      printf("Se le aumenta una posición al vector\n ");    
      ptr = (int*)realloc(ptr, cont*sizeof(int)); 
    }
    i++;
  }

  printf("\nDatos finales del vector: \n\n"); 
  for(i = 0; i < cont; i++) {
    printf("%d ", *(ptr + i) );
  }
  printf("\n");
  free(ptr);
  return 0;
}