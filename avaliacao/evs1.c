#include<stdio.h>
void main(void){
	int n;//numero de elementos do vetor
	float media=0;
	printf("Entre com o numero de elementos do vetor: ");
	scanf("%d",&n);
	float batata[n];
	int i;
	for(i=0;i<n;i++){
		printf("\nEntre com vet[%d]=",i);
		scanf("%f",&batata[i]);
	}
	printf("\n imprime o vetor");
	for(i=0;i<n;i++){
		printf("\nvet[%d]=%0.2f",i,batata[i]);
		media=media + batata[i]; // calcula a soma dos elementos do  vetor
	}
	media=media/n;
	printf("\n Imprime a media=%f",media);
	printf("\n Imprime elementos menores que a media ");
	for(i=0;i<n;i++)	if(batata[i]<media)printf("%0.2f ",batata[i]);	
}
