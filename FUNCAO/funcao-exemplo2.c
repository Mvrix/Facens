#include <stdio.h>
#include <stdlib.h>

  //EXEMPLO DE ROTINA = FUNÇÃO SEM RETORNO


      //ROTINA ↓

//função de soma para media
int soma(int num1, int num2, int num3){
    return(num1+num2+num3);
}

//função de media
int media(int s){
    int resultado;
    resultado=s/3;
    return (resultado);
}


int main(int argc, char const *argv[]) {

  int n1, n2, n3, m;

  printf("Digite um numero inteiro:");
  scanf("%d", &n1 );

  printf("Digite um outro numero inteiro:");
  scanf("%d", &n2 );

  printf("Digite um outro numero inteiro:");
  scanf("%d", &n3 );
  // não é preciso chamar a função pq nao agrega nada a variavel atual

  //função 'media' chama função 'soma' ( ﾉ ﾟｰﾟ)ﾉ
  m=media(soma(n1,n2,n3));

  printf("A media dos valores é: %d\n", m );

}
