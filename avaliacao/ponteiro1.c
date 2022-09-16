#include <stdio.h>
int main() {
int b, *c;
b = 10;
c = &b;
*c = 11;
printf("%d\n", b);
return 0;
}
