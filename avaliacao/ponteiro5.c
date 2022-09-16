#include <stdio.h>
int main() {
double b, a;
int *c;
b = 10.89;
c = &b; /* erro: tipos diferentes */
a = *c;
printf("%f\n", a);
return 0;
}

