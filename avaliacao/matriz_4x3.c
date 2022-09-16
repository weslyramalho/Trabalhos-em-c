#include <stdio.h>
void main(void) {
int i, j;
//Alocação estática de uma matriz com 4 linhas e 3 colunas
float m[4][3] = {{5.0,10.0,15.0},
                 {20.0,25.0,30.0},
                 {35.0,40.0,45.0},
                 {50.0,55.0,60.0}};
                  
for(i=0; i<4; i++) {
putchar('\n');
for(j=0; j<3; j++)
printf("%f\t ", m[i][j]);
}

//Essa declaração cria um vetor A cujos elementos A[0], A[1]
//A[2] e A[3] são vetores contendo cada um deles 3 elementos 
putchar('\n');
putchar('\n');

for(i=0;i<4;i++)
printf("%f\t%f\t%f\n", *m[i],*(m[i]+1),*(m[i]+2));
getch();
}
