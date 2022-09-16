#include<stdio.h>
typedef struct Data {
int dia;
int mes;
int ano;
} data;
typedef struct Pessoa{
char nome[31];
char fone[21];
data nasc;
} pessoa;

void main(void)
{
     int i;
     
    //nicializando uma agenda.
      pessoa agenda[] = {
      { "Itivaldo Buzo", "850-9973", {27, 7, 1970} },
      { "Roberto Soares", "266-0879", {15, 11, 1971} },
      { "Márcia Ueji", "576-8292", { 9, 5, 1966} },
      { "Silvio Lago", "851-7715", {18, 3, 1968} },
      { "Mie Kobayashi", "834-0192", { 4, 12, 1973} }
      };
      
      printf("nome            fone            nasc\n");
     for(i=0;i<5;i++)
     {
     printf("%s\t", agenda[i].nome);
     printf("%s\t", agenda[i].fone);
     printf("%d/",agenda[i].nasc.dia);
     printf("%d/",agenda[i].nasc.mes);
     printf("%d\n",agenda[i].nasc.ano);
     }
     
     getch();
}
     
