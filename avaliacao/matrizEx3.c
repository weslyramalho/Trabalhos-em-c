//3.	A dist�ncia entre v�rias cidades � dada pela tabela abaixo (em km):

//	1	2	3	4	5
//1	00	15	30	05	12
//2	15	00	10	17	28
//3	30	10	00	03	11
//4	05	17	03	00	80
//5	12	28	11	80	00

//a) Construa um programa que leia a tabela acima e informe ao usu�rio a dist�ncia 
//entre duas cidades por ele requisitadas, at� que ele entre com o c�digo 0 
//para ambas as cidades;
//b) Elabore um programa que imprima a tabela sem repeti��es, isto �, 
//se a dist�ncia entre as cidades 1 e 3 foi emitida, n�o � necess�rio emitir 
//a dist�ncia entre 3 e 1;
//c) Dado um determinado percurso, imprima o total percorrido:
//Exemplo: dado o percurso 1, 2, 3, 2, 5, 1, 4, teremos:
//15 + 10 + 10 + 28 + 12 + 5 = 80 km.

#include <stdio.h>
void distanciAB(int m[][5]);

void main(void) {
int a,b, percurso=0;
//Aloca��o est�tica de uma matriz com 5 linhas e 5 colunas
int  m[5][5] = {{00,15,	30,	05,	12},
               {15,	00,	10,	17,	28},
               {30,	10,	00,	03,	11},
               {05,	17,	03,	00,	80},
               {12,	28,	11,	80,	00}};
   //item a)            
   while(1){  
           printf("Entre com a primeira cidade de 1 a 5\n");
           scanf("%d",&a);
           printf("Entre com a segunda  cidade de 1 a 5\n");
           scanf("%d",&b); 
           if(a==0&&b==0) break;
           printf("A diatancia ente as cidade %d e  %d = %d\n",a,b,m[a-1][b-1]);
    }      
    //item c) o percurso ser� encerrado se o usu�rio entrar com -1
     printf("Entre com a primeira cidade de do percurso\n");
     scanf("%d",&a);
    while(1){
             printf("Entre com a pr�xima   cidade do percurso\n");
             scanf("%d",&b);
             if(b==-1) break;
             percurso=percurso + m[a-1][b-1];
             a=b;
             
             }
             printf("\nA dist�ncia  percorrida foi %dkm", percurso);       
                         

getch();
}


   
