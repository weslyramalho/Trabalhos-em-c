#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");
	time_t mytime;
	mytime = time(NULL);
	struct tm tm = *localtime(&mytime);
	printf("############################\n");
	printf("### Cana�  dos Caraj�s 	####\n");
	printf("###	%d/%d/%d	####\n",tm.tm_mday, tm.tm_mon, tm.tm_year+1900);
	printf("###	Hr: %d:%d:%d	####\n",tm.tm_hour, tm.tm_min, tm.tm_sec);
	printf("############################");
	int op;
	do{
	
	printf("\nEscolha uma op��o:");
	printf("\n1 - Notas de alunos");
	printf("\n2 - Verificar categoria de Jogadores");
	printf("\n0 - Sair");
	scanf("%d", &op);
	system("cls");
	
	switch(op){
		case 1:
			printf("Voce escolheu 1\n");
			break;
		
		case 2:
			printf("Voce escolheu 2\n");
			break;
			
		default:
			printf("\nOp��o invalida, favor escolher uma op��o valida!\n");
			break;
	}
}
	while(op != 0);

}
