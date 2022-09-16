/*
* 2. Sejam NOME e SEXO dois vetores contendo os nomes e sexos de cada membro
* de um clube de jovens. Masculino e feminino são indicados por 'M' e 'F'
* respectivamente. Prepare um programa que crie dois novos vetores, MASCULINOS
* e FEMININOS, tais que o vetor MASCULINO contenha os nomes de todos os indiví-
* duos masculinos em ordem alfabética e FEMININOS contenha os nomes de todos
* os indivíduos feminos em ordem alfabética.
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

#define TAM 10

void ler(char[][30], char*);
void imprimir(char[][30], char*);
void transfere(char[][30],char[][30],char[][30],char*);
void ordenar_nome(char[][30], char*);
void imprimirMF(char nomes[][30]);

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nomes[TAM][30];
    char sexos[TAM];
    char masculino[TAM/2][30];
    char feminino[TAM/2][30];

    ler(nomes, sexos);
    imprimir(nomes, sexos);
    
    transfere(nomes,masculino,feminino,sexos);
    
    printf("\n Nomes masculinos não ordenados\n");
    imprimirMF(masculino);
    printf("\n Nomes feminios não ordenados\n");
    imprimirMF(feminino);
    
    

    ordenar_nome(masculino, sexos);
    printf("\n Nomes masculinos  ordenados\n");
    imprimirMF(masculino);
    
    ordenar_nome(feminino, sexos);
    printf("\n Nomes femininos  ordenados\n");
    imprimirMF(feminino);




    getch();
    return 0;
}

void ler(char nomes[][30], char* sexos) {
    int i;
    for (i = 0; i < TAM; i++) {
        printf("\n|> Digite um nome para a %dª posição: ", (i + 1));
        gets(nomes[i]);
        printf("|> Digite um sexo <M/F> para a %dª posição: ", (i + 1));
        scanf("%c", &sexos[i]);
        setbuf(stdin, NULL);
    }
}

void imprimir(char nomes[][30], char* sexos) {
    int i;
    putchar('\n');
    for (i = 0; i < TAM; i++) {
        printf("|> %dª POSIÇÃO: NOME: %s | SEXO: %c\n", (i + 1), nomes[i], sexos[i]);
    }
}

void imprimirMF(char nomes[][30]) {
    int i;
    putchar('\n');
    for (i = 0; i < TAM/2; i++) {
        printf("|> %dª POSIÇÃO: NOME: %s\n", (i + 1), nomes[i]);
    }
}

void ordenar_nome(char nomes[][30], char* sexos) {
    int ir, ia;
    char aux_nome[30], aux;

    for (ir = 0; ir < TAM/2 - 1; ir++) {

        for (ia = ir + 1; ia < TAM/2; ia++) {

            if (strcmp(nomes[ir], nomes[ia]) > 0) {

                strcpy(aux_nome, nomes[ir]);
                strcpy(nomes[ir], nomes[ia]);
                strcpy(nomes[ia], aux_nome);

                aux = sexos[ir];
                sexos[ir] = sexos[ia];
                sexos[ia] = aux;
            }
        }
    }
}

void transfere(char nomes[][30],char masculino[][30],char feminino[][30],char* sexos)
{
     int i,j=0,k=0;
     for(i=0;i<TAM;i++)
     {
          if(sexos[i]=='M')
          {
           strcpy(masculino[j], nomes[i]);
           j++;
           }
          if(sexos[i]=='F')
          {
           strcpy(feminino[k], nomes[i]);
           k++;
           }
     }
   //  imprimirMF(masculino);
    // imprimirMF(feminino);
}        
