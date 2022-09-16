#define TAM 5
#include <stdio.h>
int main() {
int vet[] = {1, 2, 3, 4, 5}, i,*ap;
printf("\nImprime o vetor\n");
for (i = 0; i < TAM; i++)
printf("%d\n", vet[i]);
//Zera o vetor
ap=vet;
for (i = 0; i < TAM; i++)
*ap++ = 0;
printf("\nImprime o vetor Zerado\n");
for (i = 0; i < TAM; i++)
printf("%d\n", vet[i]);
return 0;
}

