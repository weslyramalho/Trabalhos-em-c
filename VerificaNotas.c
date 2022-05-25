#include <stdio.h>

void main(void){
	float nota, media, maiorNota, totalNotas=0;
	int quantidadeAlunos=0, reprovados=0, aprovados=0;
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
	printf("\nQunatidade notas %.2f ", totalNotas);
	printf("\nQunatidade alunos %d", quantidadeAlunos);
	printf("\nAprovados %d", aprovados);
	printf("\nReprovados %d", reprovados);
	printf("\nMedia turma %.2f", media);
	printf("\nA Maior nota e %.2f", maiorNota);

}
