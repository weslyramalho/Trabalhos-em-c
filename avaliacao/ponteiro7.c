#include <stdio.h>
void main(void) {
int *a,b;
a = &b;
scanf("%d", &b);
printf("Endereco apontado por a eh valor apontado por a: %p e %d\n", a, *a);
a++;
printf("Endereco apontado por a eh valor apontado por a: %p e %d\n", a, *a);
a--;
printf("Endereco apontado por a eh valor apontado por a: %p e %d\n", a, *a);
}

