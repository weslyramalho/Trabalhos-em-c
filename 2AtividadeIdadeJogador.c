#include <stdio.h>
#include <locale.h>

void main(void){
	setlocale(LC_ALL, "Portuguese");
	int idade=0, nJogadores, contador=0, infantil, juvenil, juniores, adulto;
	float idadeAdulto=0, media=0;
	printf("Quantos jogadores deseja cadastrar: ");
	scanf("%d", &nJogadores);
	do{
		printf("\n\nQual é a idade do %dº Jogador: ", contador+1);
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
	printf("\nA média de idade dos jogadores Adultos é %.2f", media);

}
