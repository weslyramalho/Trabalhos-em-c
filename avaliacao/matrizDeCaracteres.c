//Uma matriz de caracteres usada como um vetor de strings.
#include <stdio.h>
void main(void) {
char n[5][11];
int i;
for(i=0; i<5; i++) {
printf("%do nome: ",i+1);
gets(n[i]);
}

for(i=0; i<5; i++) {
printf("\n%s",n[i]);
}

getch();
}
//Na chamada à gets(), cada linha da matriz é tratada como 
//uma string.
