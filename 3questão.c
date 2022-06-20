#include <stdio.h>
#include <string.h>

void main(void){
	
	char nome[50], cidade[50];
	
	printf("nome completo: ");
	gets(nome);
	
	printf("Em que cidade você nasceu? ");
	gets(cidade);
	
	printf("\nSeu nome %s\n", nome);
	printf("Você é natural de %s", cidade);
	
	printf("\n\nA diferença de caracteres é: %d ",strlen(nome)-strlen(cidade));
	printf("\nVetor concatenado é %s", strcat(cidade, nome));
	printf("\nVetor nome em Maiúsculo é: %s", strupr(nome));
	
}
