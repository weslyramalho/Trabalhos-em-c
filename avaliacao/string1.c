#include<stdio.h>
void main(void)
{
     
     char cidade[4];
     char cidade1[]={'M','A','R','A','B','A','\0'};
     char cidade2[]={"BELEM"};
     char cidade3[]={"BELEM DO PARA"};
     
     cidade[0]='R';
     cidade[1]='I';
     cidade[2]='O';
     cidade[3]='\0';
     printf("\n%s",cidade);
     printf("\n%s",cidade1);
     printf("\n%s",cidade2);
     printf("\n%s",cidade3);
     
     char nome[81];
     printf("\nQual o seu nome?\n");
     gets(nome);
     printf("\n%s",nome);
     
     
}


