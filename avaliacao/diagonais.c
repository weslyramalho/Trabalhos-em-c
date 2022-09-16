#include<stdio.h>
#define N 3 
#define M 3
void main(void){
int i,j, matriz[N][M], somadiag=0,somasecund=0;	
//Lendo uma matriz 5 x 4 a partir da entrada padrão:
/* Leitura */
for (i = 0; i < N; i++)
	for (j = 0; j < M; j++) {
		printf("Matriz[%d][%d]: ", i, j);
		scanf("%d", &matriz[i][j]);
		if(i==j)somadiag=somadiag+ matriz[i][j];
		if(i+j+2==M+1) somasecund=somasecund+ matriz[i][j];
}
//Escrevendo uma matriz 5 x  4 na saída padrão:
/* Escrita */
printf("\n Imprime a Matriz\n");
for (i = 0; i < N; i++) {
	for (j = 0; j < M; j++)
		printf("%d ", matriz[i][j]);
		printf("\n");
}
	printf("\n imrime a soma sos valores da diagonal principal: %d",somadiag);
	printf("\n imrime a soma sos valores da diagonal principal: %d",somasecund);
}
