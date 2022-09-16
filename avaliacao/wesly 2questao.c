#include <stdio.h>

void main(void){
	float precoProduto, salarioPessoa;
	printf("Entre com o preco do produto: ");
	scanf("%f", &precoProduto);
	printf("Entre como salario da pessoa: R$ ");
	scanf("%f", &salarioPessoa);
	if(salarioPessoa > precoProduto*0.20 ){
		printf("A pessoa pode comprar o produto");
	}else{
		printf("O novo preco com desconto e R$ %.2f", precoProduto-precoProduto*0.15);
	}
}
