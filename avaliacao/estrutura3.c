#include <stdio.h>
typedef struct Coordenadas {
float x, y;
}coordenadas;

void main(void) {
coordenadas c1, c2, *c3, *c4;
c3 = &c1;
c4 = &c2;
c1.x = -1;
c1.y = -1.5;
c2.x = 2.5;
c2.y = -5;
(*c3).x = 1.5;
(*c3).y = 1.5;
c4->x = -1;
c4->y = -1;
printf("Coordenadas de c1: (%0.2f, %0.2f)\n", c1.x, c1.y);
printf("Coordenadas de c2: (%0.2f, %0.2f)\n", c2.x, c2.y);

}
