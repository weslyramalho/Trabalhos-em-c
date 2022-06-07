#include<stdio.h>
void main(void){
	
	float vet[7];
	vet[0]=24.5;
	vet[1]=26.7;
	vet[2]=28.7;
	vet[3]=29.3;
	vet[4]=27.9;
	vet[5]=25.8;
	vet[6]=26.4;
	int i;
	float media=0;
	
	printf("\nImprime as temperaturas da semana ");
	for(i=0; i<7; i++){
		media = media+vet[i];
		printf("%0.2f ",vet[i]);	
}
	for(i=0; i<7;i++){
		if(vet[i] >= (media/7)){
			printf("\n%0.2f ", vet[i]);
		}
	}
	printf("\nmedia %f ", media/7);

	
}
