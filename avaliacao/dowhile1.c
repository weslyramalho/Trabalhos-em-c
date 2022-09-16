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
	num = 0;
  /* O comando do/while faz a mesma função do comando repita/até */
	do 
	{
		num = num + 1;
		/* se o número é impar */
		if (num%2 == 1) 	soma = soma + num;
    }
	while (num <superior);
	printf("A soma dos números ímpares de 1 até %d é: %d\n", superior, soma);
	getch();
	return 0;
}
