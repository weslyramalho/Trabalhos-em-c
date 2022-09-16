#include <stdio.h>
#include <string.h>
struct Aluno {
char nome[45];
int idade;
char sexo;
};
void main(void) {
struct Aluno a;
printf("Digite o nome: ");
gets(a.nome);
printf("Digite a idade: ");
scanf("%d", &a.idade);
printf("Digite o sexo: ");
setbuf(stdin, 0); /* Limpa o buffer de entrada */
scanf("%c", &a.sexo);
printf("a.nome = %s, a.idade = %d, a.sexo = %c\n",
a.nome, a.idade, a.sexo);
}

