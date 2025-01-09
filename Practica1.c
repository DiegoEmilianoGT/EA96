//
// Created by usuario on 08/01/2025.
//

#include <stdio.h>

int limit;

int validatePositiveInt(int limit) {
  while (limit <= 0) {
    printf("El numero no es valido.\n Vuelva a escribirlo: ");
    scanf("%d", &limit);
  }
  printf("El nnmero limite es positivo.\n");
  return limit;
}

void generateEvenNumbers(int limit) {

    for (int i = 1; i <= limit; i++) {
      if (i % 2 == 0) {
        printf("%d ", i);
      }
    }
}

int main() {
  printf("Ingrese el numero limite:\n");
  scanf("%d", &limit);
  limit = validatePositiveInt(limit);
  generateEvenNumbers(limit);
  return 0;
}






