#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {

  int cont = 0;
  while (cont<=8){
      if(cont%2==1)
        printf("%d\n", cont-1);
  printf("%d\n",cont);
  cont=cont+1;
  }
  return 0;
}
