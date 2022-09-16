//Vetor de nomes
#include<stdio.h>
void main(void){
	
	char nome[5][30];
	int i;
	
	float notas[5];
	printf("Entra com os nomes\n");
	for(i=0; i<5; i++){
		printf("\nEntre com nome%d=",i+1);
		gets(nome[i]);
	}
	printf("Entra com as notas\n");
	for(i=0; i<5; i++){
		printf("\nEntre com as notas%d=",i+1);
		scanf("%f",&notas[i]);
	}
	
    printf("\nImprime os nomes e as notas \n");
    printf("NOMES	NOTAS\n");
    for(i=0;i<5;i++){
    	printf("%s",nome[i]);
    	printf("\t%0.2f\n",notas[i]);
	}
}
