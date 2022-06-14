#include <stdio.h>
#include <string.h>

struct Aluno {
char nome[45];
int matricula;
float nota;
};

void main(void) {
struct Aluno a, b;

printf("Digite o nme do aluno 'a': ");
gets(a.nome);
printf("Digite a matricula: ");
scanf("%d", &a.matricula);
printf("Digite o nota: ");
scanf("%f", &a.nota);
setbuf(stdin, 0); /* Limpa o buffer de entrada */
printf("Digite o nme do aluno 'b': ");
gets(b.nome);
printf("Digite a matricula: ");
scanf("%d", &b.matricula);
printf("Digite a nota: ");
setbuf(stdin, 0); /* Limpa o buffer de entrada */
scanf("%f", &b.nota);

if(a.nota > b.nota) printf("O aluno %s tem a maior nota e o numero de sua matricula e: %d", a.nome, a.matricula);
else if (a.nota < b.nota) printf("O aluno %s tem a maior nota e o numero de sua matricula e: %d", b.nome, b.matricula);
else printf("As notas dos lunos sao iguais");
}

