//Também pode acontecer de não haver duas alternativas numa decisão simples,
//ou seja, ou o comando é executado ou, então, nada é feito. O programa
//a seguir exemplifica esse caso, resolvendo o seguinte problema: “Numa empresa
//paga-se R$ 19,50 a hora e recolhe-se para o imposto de renda 10% dos
//salários acima de R$ 1500,00. Dado o número de horas trabalhadas por um
//funcionário, informar o valor do seu salário líquido”.
//Exemplo 2.4. O uso de decisão simples com uma única alternativa.
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
//Obviamente, para calcular o salário bruto, basta multiplicar o número de
//horas trabalhadas pelo valor pago por hora. O salário líquido será igual ao
//salário bruto, a menos que o seu valor exceda o limite de R$ 1500,00. Nesse
//caso, o salário líquido será apenas 90% do salário bruto.
