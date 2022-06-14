typedef struct Data {
int dia;
int mes;
int ano;
} data;
typedef struct Pessoa {
char nome[31];
char fone[21];
data nasc;
} pessoa;

void main(void)
{
     pessoa agenda[5];
     
     strcpy(agenda[1].nome, "Roberta Soares");
     strcpy(agenda[1].fone, "266-0879");
     agenda[1].nasc.dia = 15;
     agenda[1].nasc.mes = 11;
     agenda[1].nasc.ano = 1971;
     
     printf("%s\n", agenda[1].nome);
     printf("%s\n", agenda[1].fone);
     printf("%d\n",agenda[1].nasc.dia);
     printf("%d\n",agenda[1].nasc.mes);
     printf("%d\n",agenda[1].nasc.ano);
     
}
     
