#include<stdio.h>
void main(void){
	int vet[] = {100, 50, 10, 5, 1};
	int i, quantia =209, nc;
	for(i=0; i<5;i++){
		nc=quantia/vet[i];
		printf("\n %d cedulas de %d",nc, vet[i]);
		quantia=quantia - nc*vet[i];
	}
	
}
