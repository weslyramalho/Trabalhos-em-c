#include <stdio.h>
void main(void) {
char x[] = "um"; /* inclui '\0' */
char y[] = {'d','o','i','s'}; /* não inclui '\0' */
printf("%s %s", x, y);
}
