#include <stdio.h>
#include <locale.h>
#include <time.h>


void main(void){
	setlocale(LC_ALL, "Portuguese");
	time_t mytime;
	mytime = time(NULL);
	struct tm tm = *localtime(&mytime);
	float nota=0, media=0, maiorNota=0, totalNotas=0, idadeAdulto=0;
	int quantidadeAlunos=0, reprovados=0, aprovados=0;
	int idade=0, nJogadores=0, contador=0, infantil=0, juvenil=0, juniores=0, adulto=0;

	printf("############################\n");
	printf("### Canaã  dos Carajás 	####\n");
	printf("###	%d/%d/%d	####\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
	printf("###	Hr: %d:%d:%d	####\n",tm.tm_hour, tm.tm_min, tm.tm_sec);
	printf("############################");
	
	int op;
	do{
	

	printf("\nEscolha uma opção:");
	printf("\n1 - Notas de alunos");
	printf("\n2 - Verificar categoria de Jogadores");
	printf("\n0 - Sair");
	scanf("%d", &op);
	system("cls");
	
	switch(op){
		case 1:
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
			printf("\nA Maior nota é: %.2f\n\n", maiorNota);


			break;
		
		case 2:
			printf("BEM VINDO A ECCFC\n");
			printf("Quantos jogadores deseja cadastrar: ");
			scanf("%d", &nJogadores);
			
			do{
				printf("\nQual é a idade do %dº Jogador: ", contador+1);
				scanf("%d", &idade);
				contador++;
				if(idade < 13) {
					printf("Categoria Infantil!");
					infantil++;	
				}
				else if(idade >= 13 && idade < 16) {
					printf("Categoria Juvenil!");
					juvenil++;
				}
				else if(idade >= 16 && idade < 18) {
					printf("Categoria Juniores!");
					juniores++;
				}
				else {
					idadeAdulto += idade;
					printf("Categoria Adulto!");
					adulto++;
		
		}
		
		
	}
			while(contador < nJogadores);
			media = idadeAdulto/adulto;
			printf("\nTemos %d jogadores na Categoria Juniores", juniores);
			printf("\nA média de idade dos jogadores Adultos é: %.2f\n\n", media);

			break;
			
		default:
			printf("\nOpção invalida, favor escolher uma opção valida!\n");
			break;
	}
}
	while(op != 0);

}
