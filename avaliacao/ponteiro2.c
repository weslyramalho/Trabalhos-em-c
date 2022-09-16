#include <stdio.h>
int main() {
int num, q = 1, *p;
num = 100;
p = &num;
q = *p;
printf("%d\n", q);
return 0;
}

