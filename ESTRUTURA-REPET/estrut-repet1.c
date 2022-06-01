#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {

  int numero;
  printf("informe seu nuemro:");
  scanf("%d", &numero);

  while (numero<=100) {
    printf("O valor da variavel numero é: %d\n", numero);
    numero++;
  }
}
