#include<stdio.h>

void main(void){
	int n,i;
	printf("Digite o valor de N: ");
	scanf("%d",&n);
	int vet[n];
	
	for(i=0; i < n; i++){
		printf("Entre com o valor da posicao %d ", i);
		scanf("%d", &vet[i]);
	}
	printf("O nomueros maiores sao: ");
	for(i=0; i < n; i++){
		if(n < vet[i]){
			printf("%d ", vet[i]);
		}
	}
}
