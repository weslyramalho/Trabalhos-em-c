typedef struct Data {
int dia;
int mes;
int ano;
} data;
typedef struct {
char nome[31];
char fone[21];
data nasc;
} pessoa;

void main(void)
{
     pessoa amigo;
     strcpy(amigo.nome, "Itivaldo Buzo");
     strcpy(amigo.fone, "850-9973");
     amigo.nasc.dia = 27;
     amigo.nasc.mes = 7;
     amigo.nasc.ano = 1970;
     
     printf("%s\n", amigo.nome);
     printf("%s\n", amigo.fone);
     printf("%d\n",amigo.nasc.dia);
     printf("%d\n",amigo.nasc.mes);
     printf("%d\n",amigo.nasc.ano);
     
}
     
