/* Arquivo Capitulo_04_prob18.c */
//Fa�a um algoritmo que calcule a soma dos n�meros �mpares entre 1 e um limite 
//superior definido pelo usu�rio
#include <stdio.h>
int main()
{
	int superior, num, soma;
	soma = 0;		/*ainda n�o foi somado nenhum valor */
	printf("Entre com o limite superior.\n");
	scanf("%d", &superior);
	num = 0;
  /* O comando do/while faz a mesma fun��o do comando repita/at� */
	do 
	{
		num = num + 1;
		/* se o n�mero � impar */
		if (num%2 == 1) 	soma = soma + num;
    }
	while (num <superior);
	printf("A soma dos n�meros �mpares de 1 at� %d �: %d\n", superior, soma);
	getch();
	return 0;
}
