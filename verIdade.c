#include <stdio.h>

void main(void){
	int atual, nascimento;
	printf("Digite o ano atual: ");
	scanf("%d", &atual);
	printf("Digite o ano do seu nascimento: ");
	scanf("%d", &nascimento);
	printf("Voce nasceu em %d e tem: %d ", nascimento, atual-nascimento);
}
