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

	int op;
	do{
	
	printf("############################\n");
	printf("### Canaã  dos Carajás 	####\n");
	printf("###	%d/%d/%d	####\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
	printf("###	Hr: %d:%d:%d	####\n",tm.tm_hour, tm.tm_min, tm.tm_sec);
	printf("############################");
	printf("\nEscolha uma opção:");
	printf("\n1 - Notas de alunos");
	printf("\n2 - Verificar categoria de Jogadores");
	printf("\n0 - Sair");
	scanf("%d", &op);
	system("cls");
	
	switch(op){
		case 1:
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
			printf("\nA Maior nota e %.2f\n\n", maiorNota);


			break;
		
		case 2:
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
			printf("\n\nSoma idade adulto %.2f ", idadeAdulto);
			media = idadeAdulto/adulto;
			printf("\nTemos %d jogadores na Categoria Juniores", juniores);
			printf("\nA média de idade dos jogadores Adultos é %.2f\n\n", media);

			break;
			
		default:
			printf("\nOpção invalida, favor escolher uma opção valida!\n");
			break;
	}
}
	while(op != 0);

}
