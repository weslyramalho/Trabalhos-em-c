#include <stdio.h>
#include <string.h>

void main(){
	int a, b;
	printf("Entre com o a ");
	scanf("%d", &a);
	
	printf("Entre com o a ");
	scanf("%d", &b);
	
	printf("O total e: %d", soma(a,b));
	/*char nome[30];
	int tam, i;
	printf("Digite um nome ");
	gets(nome);
	printf("%s\n", nome);
	tam = strlen(nome);
	for(i=tam-1; i>=0; i--){
		printf("%c", nome[i]);
	}
	*/
}
int soma(int a, int b){
	float result;
	result = a+b;
	return result;
}
