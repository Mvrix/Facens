#include <stdio.h>
#include <stdlib.h>

main() {
  //int numeros [10]={9,5,4,3,2,7,8,1,2,0};
  int numeros[10];
  int i=0;
  for (i = 0; i < 10; i++) {
    printf("digite um numero:");
    scanf("%i", &numeros[i]);
  }
  //estrutura de repetição para mostrar todos os numeros do vetor
  for (i = 0; i < 10; i++) {
    printf("Numero somado com +10 \n%i\n",numeros[i] + 10); // + 10 irá adicionar +10 no resultado do numero dentro do vetor
  }
   // como mostrar apenas um numero do vetor:
   printf("Numero na posição 0: %i", numeros[0]); //numeros[0] = primeira posição do vetor - valor dentro da [] será mostrado a casa

}
