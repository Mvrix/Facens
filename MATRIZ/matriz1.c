#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {


  int matriz[3][3];
  int linha, coluna;

    // o primeiro 'for' comanda o segundo 'for', primeiro ele vai varrer uma coluna para depois ir na proxima linha
    //          ↓↓↓↓↓↓↓

  for (linha = 0; linha <= 2 ; linha++) {
    for (coluna = 0; coluna <= 2 ; coluna++) {
      printf("Digite um valor inteiro: - matriz [%i] [%i]:",linha,coluna);
      scanf("%i", &matriz[linha][coluna]);
    }
  }

  for (linha = 0; linha <= 2 ; linha++) {
    for (coluna = 0; coluna <= 2 ; coluna++) {

    // o comando abaixo com 'if' irá apenas mostrar os dados na diagonal ↓↓↓↓↓↓↓
    //  if (linha==coluna) {
    //    printf(" %i ", matriz[linha][coluna]);
    //  }

      printf("\nMatriz: - matriz [%i] [%i]: %i",linha,coluna, matriz[linha][coluna]); //←←←←←← 'printf' exibir matriz por linha
      printf(" %i ", matriz[linha][coluna]); //←←←←←← 'printf' para exibir em formato de matriz (tabela)

    }
    printf("\n"); //espaçamento a cada linha processada
  }

}
