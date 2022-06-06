#include <stdio.h>

void main(void){
	
	int op,n,c,r;
	do{
		printf("\n## Taboada1.0 ##\n");
		printf("1 - Adição\n");
		printf("2 - Subtração\n");
		printf("3 - Multiplicação\n");
		printf("4 - Divisão\n");
		printf("0 - Sair\n");
		scanf("%d", &op);
		system("cls");
		
		switch(op){
			case 1:
				printf("Taboada de Adição");
				printf("\n Digite um número entre 1 e 10: ");
				scanf("%d", &n);
					for(c=1; c<=10; c++) {
					r = n+c;
					printf("\n %d + %2d = %3d",n, c, r);
				}
				printf("\n");
				break;
				
			case 2:
				printf("Taboada de Subtração");
				printf("\n Digite um número entre 1 e 10: ");
				scanf("%d", &n);
					for(c=1; c<=10; c++) {
					r = n-c;
					printf("\n %d - %2d = %3d",n, c, r);
				}
				printf("\n");
				break;
				
			case 3:
				printf("Taboada de Multiplicação");
				printf("\n Digite um número entre 1 e 10: ");
				scanf("%d", &n);
					for(c=1; c<=10; c++) {
					r = n*c;
					printf("\n %d x %2d = %3d",n, c, r);
				}
				printf("\n");
				break;
				
			case 4:
				printf("Taboada de Divisão");
				printf("\n Digite um número entre 1 e 10: ");
				scanf("%d", &n);
					for(c=1; c<=10; c++) {
					r = n*c;
					printf("\n %d / %2d = %3d",r, n, c);
				}
				printf("\n");
				break;
				
			default:
				printf("Digite uma opção valida!");
				
		}
		
	}
	while(op != 0);
}
