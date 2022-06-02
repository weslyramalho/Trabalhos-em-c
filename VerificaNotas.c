#include <stdio.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");

	float nota, media, maiorNota=0, totalNotas=0;
	int quantidadeAlunos=0, reprovados=0, aprovados=0;
	
	printf("Engenharia da Computação de Canaã\n");
	
	printf("Digite a nota dos alunos: ");
	scanf("%f", &nota);
	
	while(nota >= 0){
		totalNotas += nota;
		if(nota > maiorNota) maiorNota = nota;
		
		if(nota >= 5) aprovados++;
		else reprovados++;
		printf("Digite a nota dos alunos: ");
		scanf("%f", &nota);
		quantidadeAlunos++;

	}
	media = totalNotas/quantidadeAlunos;
	printf("\nQuantidade de alunos  analisados: %d", quantidadeAlunos);
	printf("\nQuantidade de Alunos Aprovados: %d", aprovados);
	printf("\nQuantidade de Alunos Reprovados: %d", reprovados);
	printf("\nMedia de notas da turma: %.2f", media);
	printf("\nA Maior nota é: %.2f", maiorNota);
	

}


