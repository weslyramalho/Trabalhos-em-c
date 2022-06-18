#include<stdio.h>

typedef struct Carro{
	char marca[20];
	int quantidade;
	int ano;
	char cor[15];
	float peco;
}carro;

void main(void){
	int n,i;
	float prec;
	char marca[50];
	printf("Quantos carros deseja cadastrar? ");
	scanf("%d", &n);
	carro modelo[n];
	
	for(i=0; i < n; i++){
		setbuf(stdin, 0);
		printf("Qual a marca do carro? ");
		gets(modelo[i].marca);
		setbuf(stdin, 0);
		printf("Quantos veiculos a no estoque? ");
		scanf("%d", &modelo[i].quantidade);
		printf("Qual o ano do veiculos? ");
		scanf("%d", &modelo[i].ano);
		setbuf(stdin, 0);
		printf("Qual a cor  do veiculo? ");
		gets(modelo[i].cor);
		printf("Qual o valor? ");
		scanf("%f", &modelo[i].peco);
	}
	
	for(i=0; i < n; i++){
		printf("\nMarca: %s\n", modelo[i].marca);
		printf("Estoque: %d\n", modelo[i].quantidade);
		printf("Ano: %d\n", modelo[i].ano);
		printf("Cor: %s\n", modelo[i].cor);
		printf("Preco: %0.2f\n", modelo[i].peco);
	}
	
	printf("\nEntre com o preco que deseja pesquisar: ");
	scanf("%f",  &prec);
	
	for(i=0; i < n; i++){
		if(modelo[i].peco >= prec){
			printf("\nMarca: %s\n", modelo[i].marca);
			printf("Estoque: %d\n", modelo[i].quantidade);
			printf("Ano: %d\n", modelo[i].ano);
			printf("Cor: %s\n", modelo[i].cor);
		}else printf("\nNão econtrado!");
	}
	setbuf(stdin, 0);
	printf("\nEntre com a marca que deseja pesquisar: ");
	gets(marca);
	
	for(i=0; i < n; i++){
		if(strcmp(modelo[i].marca,marca)== 0){
			printf("\nPreco: %0.2f\n", modelo[i].peco);
			printf("Estoque: %d\n", modelo[i].quantidade);
			printf("Ano: %d\n", modelo[i].ano);
			printf("Cor: %s\n", modelo[i].cor);
		}else printf("\nCarro não encontrado");
	}
	
	
}
