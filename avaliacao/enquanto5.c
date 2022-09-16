
//Faça um algoritmo que calcule a soma de todos os números ímpares dentro de uma faixa 
//de valores determinada pelo usuário.Um número é ímpar quando sua divisão por 2
// não é exata, ou seja, o resto resultante da divisão inteira do número por 2 tem valor 1.

#include <stdio.h>
int main (void)
{
int inferior,superior,num,soma;
soma=0;
printf("Entre com o limite inferior:");
scanf("%d", &inferior);
printf("Entre com o limite superior:");
scanf("%d", &superior);
num=inferior;
while(num < superior)
{
          if(num%2==1) soma=soma+num;
          num=num+1;
}
printf("\n Somatoria=%d",soma);          
getch();
return 0;
}
