#include <stdio.h>

void main(void) {
float a, b, c;
printf("\nInforme tres numeros: ");
scanf("%f %f %f", &a, &b, &c);
if( a<b+c && b<a+c && c<a+b ) {
	printf("\nE um triangulo: ");
if( a==b && b==c ) printf("equilatero");
else if( a==b || a==c || b==c ) printf("isosceles");
else printf("escaleno");
}
else printf("\nNão é um triângulo");
getch();
}                                                                                                                                                                                                                                                                                                                                                                                                 
