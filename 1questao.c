/*
WESLY RAMALHO LOPES
1 -  Questão
*/

#include<stdio.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");
	int n,i,a=0,totala=0;
	
	printf("Entre com o valor de n: ");
	scanf("%d", &n);
	int vet[n];
	
	printf("Digite o valor de 'a':");
	scanf("%d", &a);
	
	for(i=0; i < n; i++){
		printf("Digite o valor do elemento na posição %d :", i);
		scanf("%d", &vet[i]);
	}
	for(i=0; i < n; i++){
		if(a == vet[i]) {
		totala++;
	}
		printf("\nO valor do elemento na possição %d é %d", i, vet[i]);	 
	}
		
	printf("\nO valor de 'a' é:  %d ", a);
	printf("\nO valor %d aparece %d vezes: ", a, totala);
	
}

