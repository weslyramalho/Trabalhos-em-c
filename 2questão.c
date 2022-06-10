#include <stdio.h>

void main(void){

	int n,i, m=0;
	printf("Entre com o valor de N ");
	scanf("%d", &n);
	float vet[n], med=0, t=0;
	
	for(i=0; i < n; i++){
		printf("Digite o valor do elemento na posição %d: ", i);
		scanf("%f", &vet[i]);
	}
	printf("\nOs elementos do vetor são: \n");
	for(i=0; i < n; i++){
		t+=vet[i];
		printf("%0.2f  ", vet[i]);	
	}
	med = t/n;
	printf("\n\nA media é: %0.2f\n", med);	
	for(i=0; i<n; i++){
		if(vet[i] < med){
		m++;
	}
	}
	printf("Temos %d elementos abaixo da media", m);
	
	
}
