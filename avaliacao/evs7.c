#include<stdio.h>
#include<string.h>
void main(void){
	char vet[21];
	printf("Entre com a palavra: ");
	gets(vet);
	printf("\nInprime a palavra: ");
	printf("\n%s",vet);
	printf("\n Imprimir respectivamente a primeira e a ultima letra");
	int i=0;
	do{
		if(i==0) printf("\nImprime a primeira letra: %c",vet[i]);
		i++;
	}while(vet[i]!=NULL);
	printf("\nImprime a ultima letra: %c",vet[i-1]);
	printf("\nNumero de letras da palavras: %d",strlen(vet));
}
