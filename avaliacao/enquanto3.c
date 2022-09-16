/* Arquivo Capitulo_04_prob12.c */
//Ler 100 números e calcular a soma e 	a média
#include <stdio.h>
int main()
{
	int contador;
	float soma, media, valor;
	contador = 0;		/* nenhuma iteração feita até aqui */
	soma = 0;			/* ainda não foi somado nenhum valor */
	valor = 0;
	printf("Digite 100 valores para calcular a média.\n");
	//while (contador < 100)
    while (contador < 5)  
	{
		printf("Entre com um valor: ");
		scanf("%f", &valor);
		soma = soma + valor;
		/* a cada iteração conta-se mais um */
		contador = contador + 1;
	}
	/* calcula a média */
	media = soma / contador;	
	printf("Soma: %f\n", soma);
	printf("Média: %f\n", media);
	getch();
		return 0;
	}
