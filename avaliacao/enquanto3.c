/* Arquivo Capitulo_04_prob12.c */
//Ler 100 n�meros e calcular a soma e 	a m�dia
#include <stdio.h>
int main()
{
	int contador;
	float soma, media, valor;
	contador = 0;		/* nenhuma itera��o feita at� aqui */
	soma = 0;			/* ainda n�o foi somado nenhum valor */
	valor = 0;
	printf("Digite 100 valores para calcular a m�dia.\n");
	//while (contador < 100)
    while (contador < 5)  
	{
		printf("Entre com um valor: ");
		scanf("%f", &valor);
		soma = soma + valor;
		/* a cada itera��o conta-se mais um */
		contador = contador + 1;
	}
	/* calcula a m�dia */
	media = soma / contador;	
	printf("Soma: %f\n", soma);
	printf("M�dia: %f\n", media);
	getch();
		return 0;
	}
