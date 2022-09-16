//EXEMPLO REALLOC()

#include <stdio.h>
#include <stdlib.h>

void main(void) {
	int *ap;
  ap = (int *)malloc(sizeof(int));
  int i;

  *ap = 42;
  printf("%d  a resposta em uma variavel dinamicamente alocada\n"
      "utilizando malloc()!\n", *ap);
     
 
      
      printf("\n Imprimindo com 10 posicoes da variavel inteira realocando com realloc\n");  

  ap = realloc(ap, 10*sizeof(int));

  for ( i = 0; i < 10; i++)
    *(ap + i) = 42;

  for ( i = 0; i < 10; i++)
    printf("%d ", *(ap + i));
    
}
                
