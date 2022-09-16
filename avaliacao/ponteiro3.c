#include <stdio.h>
int main() {
int a = 3, b = 2;
int *p, *q;
p = &a;
q = p;
*q = *q + 1;
q = &b;
b = b + 1;
printf("%d, %d\n", *q, *p);
return 0;
}

