//Para exemplificar o uso de repetição com precondição, vamos resolver o
//seguinte problema: “dado um número natural, exibir os seus dígitos”. Por
//exemplo, dado o número 8503 como entrada, o programa deverá exibir como
//saída os dígitos 3, 0, 5 e 8. A estratégia será dividir o número sucessivamente
//por 10 e ir exibindo os restos obtidos, um a um. O processo se repete enquanto
//o número for diferente de zero
//Exibe os dígitos de um número.
#include <stdio.h>
main() {
unsigned n, d;

printf("\n Digite um número: ");
scanf("%u", &n);
printf("\n Os seus dígitos são: ");
while( n!= 0 ) {
d = n % 10;
n /= 10;
printf("%u ", d);
}
getch();
}
