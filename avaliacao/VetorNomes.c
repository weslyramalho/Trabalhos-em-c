//Vetor de nomes
#include<stdio.h>
void main(void){
	
	char nome[5][30];
	int i;
	printf("Entra com os nomes\n");
	for(i=0; i<5; i++){
		printf("\nEntre com nome%d=",i+1);
		gets(nome[i]);
	}
	
    printf("\nImprime os nomes no vetor de nomes\n");
    for(i=0;i<5;i++){
    	printf("%s\n",nome[i]);
	}
}
