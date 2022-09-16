#include<stdio.h>
void main(void){
 
 char *vet[3] = { "azul", "verde", "amarelo" };
 int i;

for(i=0;i<3;i++)
   printf("\n%s",vet[i]);
   
   char vet1[3][10];
   for(i=0;i<3;i++){
   	printf("\nLer o nome: ");
   gets(vet1[i]);
   }

   for(i=0;i<3;i++){
   	printf("\n%s",vet1[i]);
   }
   

}
