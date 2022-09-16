#include <stdio.h>
int main() {
float *a, *b, c, d;
a = &d;
b = &c;
scanf("%f %f", &c, &d);

if (b < a)
printf("Endereco apontado por b eh menor: %p e %p\n", b, a);
else
if (a < b)
printf("Endereco apontado por a eh menor: %p e %p\n", a, b);
else if (a == b)
printf("Mesmo endereco\n"); /* impossivel neste exemplo */
if (*a == *b)
printf("\nMesmo conteudo: %f\n", *a);
else printf("\n conteudos diferentes: \na=%f\nb=%f\n", *a,*b);
return 0;
}

