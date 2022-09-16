#include <stdio.h>


int main() {

	int i, j,n;

	printf("Digite o valor de 'N': ");
	scanf("%d", &n);
	float a[n][n];

	for (i = 0; i < n; i++){
	for (j = 0; j < n; j++) {
	printf("Entre com dado da linha %d e coluna %d: ", i, j);
	scanf("%f", &a[i][j]);
}
}
	for (i = 0; i < n; i++) {
	for (j = 0; j < n; j++)
	printf("%0.1f, ", a[i][j]);
	printf("\n");
}
return 0;
}

