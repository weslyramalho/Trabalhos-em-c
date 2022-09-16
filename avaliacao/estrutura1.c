#include <stdio.h>
#include <string.h>

struct Aluno {
char nome[45];
int idade;
char sexo;
};

void main(void) {
struct Aluno a, b;
strcpy(a.nome, "Maria");
a.idade = 18;
a.sexo = 'F';

strcpy(b.nome, "Carlos");
b.idade = 34;
b.sexo = 'M';
printf("a.nome = %s, a.idade = %d, a.sexo = %c\n", a.nome, a.idade, a.sexo);
printf("b.nome = %s, b.idade = %d, b.sexo = %c\n", b.nome, b.idade, b.sexo);

}

