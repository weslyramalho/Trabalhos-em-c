#include<stdio.h>
void main(void){
int i,j, matriz[5][4];	
//Lendo uma matriz 5 x 4 a partir da entrada padrão:
/* Leitura */
for (i = 0; i < 5; i++)
	for (j = 0; j < 4; j++) {
		printf("Matriz[%d][%d]: ", i, j);
		scanf("%d", &matriz[i][j]);
}
//Escrevendo uma matriz 5 x  4 na saída padrão:
/* Escrita */
for (i = 0; i < 5; i++) {
	for (j = 0; j < 4; j++)
		printf("%d ", matriz[i][j]);
		printf("\n");
}
	
}
