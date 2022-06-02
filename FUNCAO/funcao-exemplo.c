#include <stdio.h>
#include <stdlib.h>

  //IDEIA → ANALISE DE REQUISITOS → PROJETO (DESIGN) → IMPLEMENTAÇÃO(CONSTRUÇÃO) → TESTES → INSTALAÇÃO(IMPLEMENTAÇÃO) → RESULTADO

      //declaração do escopo dentro de função referente ao valor retornado '(int num1, int num2)' int/char/const

      //função ↓
int soma(int num1, int num2){
    return(num1+num2);

}

int main(int argc, char const *argv[]) {

  int n1, n2, resultado;

  printf("Digite um numero inteiro:");
  scanf("%d", &n1 );

  printf("Digite um outro numero inteiro:");
  scanf("%d", &n2 );

  //n1 e n2 são declarações que só existem dentro da função 'soma' - logo n1 = num1 e n2 = num2 - resultado será o valor da soma declarado
  //  ↓↓↓↓↓

  resultado=soma(n1,n2);
  printf("O resultado da soma é: %d\n ", resultado);

}
