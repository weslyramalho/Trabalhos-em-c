#include <stdio.h>
#define LINHAS 4
#define COLUNAS 3
int main() {
double mat1[LINHAS][COLUNAS], mat2[LINHAS][COLUNAS], mat3[LINHAS][COLUNAS];
int i, j;
printf("*** Dados da Matriz 1 ***\n");
for (i = 0; i < LINHAS; i++)
for (j = 0; j < COLUNAS; j++) {
printf("Entre com dado da linha %d e coluna %d: ", i, j);
scanf("%lf", &mat1[i][j]);
}
printf("*** Dados da Matriz 2 ***\n");
for (i = 0; i < LINHAS; i++)
for (j = 0; j < COLUNAS; j++) {
printf("Entre com dado da linha %d e coluna %d: ", i, j);
scanf("%lf", &mat2[i][j]);}
//Cálculo da matriz 3
for (i = 0; i < LINHAS; i++)
for (j = 0; j < COLUNAS; j++) {
mat3[i][j] = mat1[i][j] + mat2[i][j];
}
printf("*** Dados da Matriz 3 ***\n");
for (i = 0; i < LINHAS; i++) {
for (j = 0; j < COLUNAS; j++)
printf("%f, ", mat3[i][j]);
printf("\n");
}
return 0;
}

