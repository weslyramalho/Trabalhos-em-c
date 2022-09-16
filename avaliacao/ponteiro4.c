#include <stdio.h>
int main() {
int b, a, *c;
b = 10;
c = &a;
*c = 11;
a = b**c; /* erro: operacao invalida */
printf("%d\n", a);
return 0;
}

