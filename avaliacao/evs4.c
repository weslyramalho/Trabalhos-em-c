#include<stdio.h>
void main(void){
	int n;//numero de elementos do vetor
	int x; 
	printf("Entre com o numero de elementos do vetor: ");
	scanf("%d",&n);
	int vet[n];
	int i;
	for(i=0;i<n;i++){
		printf("\nEntre com vet[%d]=",i);
		scanf("%d",&vet[i]);
	}
	printf("\n imprime o vetor");
	for(i=0;i<n;i++){
		printf("\n vet[%d]=%d",i,vet[i]);
	}
	printf("Entre com o valor inteiro: ");
	scanf("%d",&x);
	
	printf("\n Imprime elementos do vetor maiores que o valor inteiro informado ");
	for(i=0;i<n;i++)	if(vet[i]>x)printf("%d ",vet[i]);	
}
