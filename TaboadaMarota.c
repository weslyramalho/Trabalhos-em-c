#include <stdio.h>

void main(void){
	
	int op,n,c,r;
	do{
		printf("\n## Taboada1.0 ##\n");
		printf("1 - Adi��o\n");
		printf("2 - Subtra��o\n");
		printf("3 - Multiplica��o\n");
		printf("4 - Divis�o\n");
		printf("0 - Sair\n");
		scanf("%d", &op);
		system("cls");
		
		switch(op){
			case 1:
				printf("Taboada de Adi��o");
				printf("\n Digite um n�mero entre 1 e 10: ");
				scanf("%d", &n);
					for(c=1; c<=10; c++) {
					r = n+c;
					printf("\n %d + %2d = %3d",n, c, r);
				}
				printf("\n");
				break;
				
			case 2:
				printf("Taboada de Subtra��o");
				printf("\n Digite um n�mero entre 1 e 10: ");
				scanf("%d", &n);
					for(c=1; c<=10; c++) {
					r = n-c;
					printf("\n %d - %2d = %3d",n, c, r);
				}
				printf("\n");
				break;
				
			case 3:
				printf("Taboada de Multiplica��o");
				printf("\n Digite um n�mero entre 1 e 10: ");
				scanf("%d", &n);
					for(c=1; c<=10; c++) {
					r = n*c;
					printf("\n %d x %2d = %3d",n, c, r);
				}
				printf("\n");
				break;
				
			case 4:
				printf("Taboada de Divis�o");
				printf("\n Digite um n�mero entre 1 e 10: ");
				scanf("%d", &n);
					for(c=1; c<=10; c++) {
					r = n*c;
					printf("\n %d / %2d = %3d",r, n, c);
				}
				printf("\n");
				break;
				
			default:
				printf("Digite uma op��o valida!");
				
		}
		
	}
	while(op != 0);
}
