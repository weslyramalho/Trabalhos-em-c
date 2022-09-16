//Tamb�m pode acontecer de n�o haver duas alternativas numa decis�o simples,
//ou seja, ou o comando � executado ou, ent�o, nada � feito. O programa
//a seguir exemplifica esse caso, resolvendo o seguinte problema: �Numa empresa
//paga-se R$ 19,50 a hora e recolhe-se para o imposto de renda 10% dos
//sal�rios acima de R$ 1500,00. Dado o n�mero de horas trabalhadas por um
//funcion�rio, informar o valor do seu sal�rio l�quido�.
//Exemplo 2.4. O uso de decis�o simples com uma �nica alternativa.
#include <stdio.h>
main() {
int h;
float s;
printf("\nHoras trabalhadas? ");
scanf("%d", &h);
s = h*19.50;
if( s>1500.00 )
s = 0.90*s;
printf("\nSalario liquido: R$ %.2f", s);
getch();
}
//Obviamente, para calcular o sal�rio bruto, basta multiplicar o n�mero de
//horas trabalhadas pelo valor pago por hora. O sal�rio l�quido ser� igual ao
//sal�rio bruto, a menos que o seu valor exceda o limite de R$ 1500,00. Nesse
//caso, o sal�rio l�quido ser� apenas 90% do sal�rio bruto.
