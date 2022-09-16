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
     
    //Inicializando uma agenda.
      pessoa agenda[] = {
      { "Itivaldo Buzo", "850-9973", {27, 7, 1970} },
      { "Roberto Soares", "266-0879", {15, 11, 1971} },
      { "Márcia Ueji", "576-8292", { 9, 5, 1966} },
      { "Silvio Lago", "851-7715", {18, 3, 1968} },
      { "Mie Kobayashi", "834-0192", { 4, 12, 1973} }
      };
     for(i=0;i<5;i++)
     {
     printf("%s\n", agenda[i].nome);
     printf("%s\n", agenda[i].fone);
     printf("%d\n",agenda[i].nasc.dia);
     printf("%d\n",agenda[i].nasc.mes);
     printf("%d\n",agenda[i].nasc.ano);
     }
     
     getch();
}
     
