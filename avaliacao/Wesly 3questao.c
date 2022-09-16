#include <stdio.h>

void main(void){
	float pesoBoiUm, pesoBoiDois, pesoPorco, pesoCarneiro;
	printf("Qual e o peso do primeiro Boi: ");
	scanf("%f", &pesoBoiUm);
	printf("Qual e o peso do segundo Boi: ");
	scanf("%f", &pesoBoiDois);
	printf("Qual e o peso do Porco: ");
	scanf("%f", &pesoPorco);
	printf("Qual e o peso do carneiro: ");
	scanf("%f", &pesoCarneiro);
	
	if(pesoBoiUm > pesoBoiDois){
		printf("A diferenca do peso do Boi mais pesado e o Porco e: %.2f\n", pesoBoiUm-pesoPorco);
		printf("E a soma do peso do Boi mais leve e do carneiro e : %.2f\n", pesoBoiDois+pesoCarneiro);
	}else{
		printf("A diferenca do peso do Boi mais pesado e o Porco e: %.2f\n", pesoBoiDois-pesoPorco);
		printf("E a soma do peso do Boi mais leve e do carneiro e : %.2f\n", pesoBoiUm+pesoCarneiro);
	}
}
