//Fa�a um algoritmo que leia um n�mero inteiro e calcule o seu fatorial. 
//Se o n�mero for negativo, informe que o valor � inv�lido
/* Fatorial */
#include <stdio.h>
int main (void)
{
int valor,fat,n;
printf("Entre com o valor:");
scanf("%d", &valor);
if(valor < 0) printf("\valor invalido");
else
{
 /* calcula fatorial */
 fat = 1;
 n=valor;
 while (n>1)
 {
  fat=fat*n;
  n--;
}
printf(" Fatorial = %d \n", fat);
}
getch();
return 0;
}
