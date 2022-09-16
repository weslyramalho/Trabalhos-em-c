#include <stdio.h>
#include <string.h>

void main(void) {
char x[] = "um";
char y[] = "um";
int a;
a = strcmp(x,y);
if(a==0){
	printf("Igual");
}else if(a> 0) printf("X > Y");
else printf("X < Y");
}
