/* Arquivo Capitulo_04_prob18.c */
//Faça um algoritmo que calcule a soma dos números ímpares entre 1 e um limite 
//superior definido pelo usuário
#include <stdio.h>
int main()
{
	int superior, num, soma;
	soma = 0;		/*ainda não foi somado nenhum valor */
	printf("Entre com o limite superior.\n");
	scanf("%d", &superior);
    for(num=1; num<=superior;num++) {
		/* se o número é impar */
		if (num%2 == 1) 	soma = soma + num;
    }
	printf("A soma dos numeros impares de 1 ate %d h: %d\n", superior, soma);
	getch();
	return 0;
}
