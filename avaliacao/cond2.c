//A fun��o system ("COLOR A"), seleciona a cor do texto verde
//system ("COLOR B"), seleciona a cor do texto azul
//system ("COLOR C"), seleciona a cor do texto vermelho
//O uso de blocos de instru��es.
//exibir Aprovado em azul e Reprovado em vermelho, ent�o cada alternativa
//seria composta por duas instru��es: uma para selecionar a cor e a outra para
//exibir a situa��o do aluno
#include <stdio.h>

void main(void) {
float a, b, m;
printf("\n Informe a primeira nota: ");
//system("pause");
scanf("%f", &a);
printf("\n Informe a segunda nota: ");
//system("pause");
scanf("%f", &b);
m = (a+b)/2;
//system("cls");
if( m >= 7.0 ) {
system("COLOR 8B");
printf("\n Aprovado");
}
else {
//system("COLOR E0");
system("COLOR 8C");
printf("\n Reprovado");
}
getch();
}
