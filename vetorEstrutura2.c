#include <stdio.h>
struct Aluno {
int mat;
float nota;
};
typedef struct Aluno aluno;
void main (void) {
aluno turma[5];
int i;
float media=0;
for (i = 0; i < 5; i++) {
printf("Digite a matricula  do aluno numero %d: ", i + 1);
scanf("%d", &turma[i].mat);
printf("Digite a nota do aluno numero %d: ", i + 1);
scanf("%f", &turma[i].nota);
}
/* Calcula a nota media da turma */
for (i = 0; i < 5; i++)
media = media + turma[i].nota;
printf("A media da turma eh: %f\n", media / 5);
}

