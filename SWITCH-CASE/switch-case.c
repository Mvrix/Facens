#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {

  int num;

  printf("Informe um numero: \n");
  scanf("%d", &num);

  switch (num) {
    case 10:
        printf("dez");
        break;
    case 11:
        printf("onze");
        break;
    case 12:
        printf("doze");
        break;
    default:
      printf("\n Numero invalido \n");
  }


  return 0;
}
