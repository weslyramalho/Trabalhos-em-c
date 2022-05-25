#include <stdio.h>

void main(void){
	unsigned numeroConta, digito;
	
	printf("Digite o numero da conta com ate 6 digitos: ");
	scanf("%u", &numeroConta);
	printf("Numero da conta Completo: %u", numeroConta);
	while(numeroConta != 0){
		digito = numeroConta %10;
		numeroConta /=10;
		digito++;		
	}

	printf("-%u", digito );

	getch();
}
