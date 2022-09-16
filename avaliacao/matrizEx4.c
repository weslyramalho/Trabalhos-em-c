//	Um cinema que possui capacidade de 20 lugares est� sempre lotado. Certo dia cada
// espectador respondeu a um question�rio, onde constava:
//	- sua idade;
//	- sua opini�o em rela��o ao filme, que podia ser: �timo, bom, regular, ruim ou p�ssimo.

//	Elabore um programa que, recebendo estes dados calcule e mostre:

//a.	a quantidade de respostas �timo;
//b.	a diferen�a percentual entre respostas bom e regular;
//c.	a m�dia de idade das pessoas que responderam ruim;
//d.	a porcentagem de respostas p�ssimo e a maior idade que utilizou esta op��o;
//e.	a diferen�a de idade entre a maior idade que respondeu �timo e a maior idade que respondeu ruim.


#include <stdio.h>
#include<string.h>
ler (char nome[][8],  int idade[10]);
imprimir(char nome [][8], int idade[10]);
int otimo(char nome[][8]);
int difperbomreg(char nome[][8]);
float mediaruim(char nome[][8],int idade[10]);


void main(void)
{
     
     char opiniao[10][8];
     int idade[10],i;
     
     ler(opiniao, idade); 
     imprimir(opiniao, idade);
     
     //imprime quantidade de otimos
     printf("\n a quantidade de otimo foi %d\n",otimo(opiniao));
     
     //imprime a diferen�a percentual entre respostas bom e regular
     printf("\n a diferen�a percentual entre respostas bom e regular foi%d\n",difperbomreg(opiniao));
     
     //imprimea m�dia de idade das pessoas que responderam ruim;
     printf("\n  a m�dia de idade das pessoas que responderam ruim foi%f\n",mediaruim(opiniao,idade));
     
     
   getch();
}

ler (char nome[][8],  int idade[10])
{
    
    int i,j;
    
    
    
    //recebe a idade e  opiniao dos espectadores
    for (i=0;i<10;i++)
    {
     printf("Digite a  idade do espectador%d\n",i+1); 
     scanf("%d", &idade[i]); 
     printf("Digite a opiniao do  espectador%d\n",i+1);
     scanf("%s",nome[i]); 
    }  
}

imprimir(char nome[][8],  int idade[10])
{
             
    int i;
    
     
     //imprime cabe�alho
      printf("%s\t","IDADE");
      printf("%s\t","OPINIAO");
      putchar('\n');
     for(i=0; i<10; i++)
     {
     printf("%d\t", idade[i]);
     printf("%s\t",nome[i]); 
     putchar('\n');
     }
}

int otimo(char nome[][8])
{
    char aux[8]="otimo";
    int i, quant=0;
    
    for(i=0;i<10;i++) //{
    if( strcmp(nome[i], aux)==0) quant++;
    //printf("%d"\n,quant);
    //}
    
    return quant;
}

int difperbomreg(char nome[][8])
{
    char aux1[8]="bom",aux2[8]="regular";
    int i, quant1=0,quant2=0;
    int perc1,perc2,dif;
    
    for(i=0;i<10;i++)
    {
    if( strcmp(nome[i], aux1)==0) quant1++;
    if( strcmp(nome[i], aux2)==0) quant2++;
    }
    
 //   printf("%d\n",quant1);
 //   printf("%d\n",quant2);
    
    perc1=10*quant1;
    perc2=10*quant2;
    
 //   printf("%d\n",perc1);
  //  printf("%d\n",perc2);
    
    dif=perc1 - perc2;
    
 //   printf("%d\n",dif);
    
    if(dif<0) dif=-1*dif;
  //  printf("%d\n",dif);
    
    return dif;
}

float mediaruim(char nome[][8],int idade[10])
{
    char aux[8]="ruim";
    int i,m=0;
    float media=0;
    
    for(i=0;i<10;i++) 
    {
    if( strcmp(nome[i], aux)==0)
    {
        m++;
        media=media +idade[i];
     }
     }      
     media=media/m;
    
    
    return media;
}
    
    
