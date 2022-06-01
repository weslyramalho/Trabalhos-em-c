#include <stdio.h>

void main(){
	float a, b, m;
	printf("Informe a primeira nota: ");
	scanf("%f", &a);
	printf("Informe a segunda nota: ");
	scanf("%f", &b);
	m=(a+b)/2;
	if(m>=7.0) printf("Aparovado");
	else printf("Reprovado");
	getchar();
}
