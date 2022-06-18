#include <stdio.h>

void main(void){
	int i, j,n;

	printf("Digite o valor de 'N': ");
	scanf("%d", &n);
	float a[n][n], ta[n][n], ra[n][n];

	for (i = 0; i < n; i++){
	for (j = 0; j < n; j++) {
	printf("Entre com dado da linha %d e coluna %d: ", i, j);
	scanf("%f", &a[i][j]);
}
}
	printf("\nMatiz 'A'\n");
	for (i = 0; i < n; i++) {
	for (j = 0; j < n; j++)
	printf("[%0.1f], ", a[i][j]);
	printf("\n");
}	
	for (i = 0; i < n; i++) {
	for (j = 0; j < n; j++)
	ta[j][i]=a[j][i];
}
	
	printf("\nMatriz transposta\n");
	for (i = 0; i < n; i++) {
	for (j = 0; j < n; j++)	
	printf("[%0.1f], ", ta[j][i]);
	printf("\n");

}	
	for(i=0; i < n; i++){
	for(j=0; j < n; j++)
	if(i+j+2==n+1)ra[j][i]= a[i][j]+ ta[j][i];
	}
	
	for(i=0; i < n; i++){
	for(j=0; j < n; j++)
	if(i+j+2!=n+1) ra[j][i]=ta[j][i];
}
	

	printf("\nMatriz RA\n");
	for(i = 0; i < n; i++){
	for(j = 0; j < n; j++)
	printf("[%0.1f], ", ra[j][i]);
	printf("\n");

	}
		
}

	

