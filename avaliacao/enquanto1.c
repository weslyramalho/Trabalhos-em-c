//Para exemplificar o uso de repeti��o com precondi��o, vamos resolver o
//seguinte problema: �dado um n�mero natural, exibir os seus d�gitos�. Por
//exemplo, dado o n�mero 8503 como entrada, o programa dever� exibir como
//sa�da os d�gitos 3, 0, 5 e 8. A estrat�gia ser� dividir o n�mero sucessivamente
//por 10 e ir exibindo os restos obtidos, um a um. O processo se repete enquanto
//o n�mero for diferente de zero
//Exibe os d�gitos de um n�mero.
#include <stdio.h>
main() {
unsigned n, d;

printf("\n Digite um n�mero: ");
scanf("%u", &n);
printf("\n Os seus d�gitos s�o: ");
while( n!= 0 ) {
d = n % 10;
n /= 10;
printf("%u ", d);
}
getch();
}
