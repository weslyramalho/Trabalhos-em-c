#include <stdio.h>
#include <string.h>

void main(void){
	
	char nome[50], cidade[50];
	
	printf("nome completo: ");
	gets(nome);
	
	printf("Em que cidade voc� nasceu? ");
	gets(cidade);
	
	printf("\nSeu nome %s\n", nome);
	printf("Voc� � natural de %s", cidade);
	
	printf("\n\nA diferen�a de caracteres �: %d ",strlen(nome)-strlen(cidade));
	printf("\nVetor concatenado � %s", strcat(cidade, nome));
	printf("\nVetor nome em Mai�sculo �: %s", strupr(nome));
	
}
