//O uso do operador condicional como argumento de função.
#include <stdio.h>
main() {
int x, y;
printf("\nInforme dois valores: ");
scanf("%d %d", &x, &y);
printf("\n Máximo = %d", x>y ? x : y);
getch();
}
