//O uso do operador condicional como argumento de fun��o.
#include <stdio.h>
main() {
int x, y;
printf("\nInforme dois valores: ");
scanf("%d %d", &x, &y);
printf("\n M�ximo = %d", x>y ? x : y);
getch();
}
