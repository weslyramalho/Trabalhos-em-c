#include <stdio.h>
#include <stdlib.h>
int main() {
double *v1, *v2, produto;
int i, n;
printf("Qual a dimensao dos vetores?\n");
scanf("%d", &n);
v1 =(double*) malloc(n*sizeof(double));
v2 = (double*)malloc(n * sizeof(double));
printf("Entre com os valores do primeiro vetor: ");
for (i = 0; i < n; i++)
scanf("%lf", &v1[i]);
printf("Entre com os valores do segundo vetor: ");
for (i = 0; i < n; i++)
scanf("%lf", &v2[i]);
produto = 0;
for (i = 0; i < n; i++)
produto = produto + (v1[i] * v2[i]);
printf("Produto interno dos dois vetores: %f\n", produto);
free(v1);
free(v2);
return 0;
}

