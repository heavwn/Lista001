#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14159

int main(){
float r, a, v;
	
printf("--------- CALCULADORA DE ESFERA ---------\n");

printf("Informe o raio da esfera: ");
	scanf("%f", &r);
system("cls");

a =	 4 * PI * pow(r,2);
v = (4.0/3.0) * PI * pow(r,3);

printf("--------- RESULTADOS ---------\n");
printf("Raio informado: %.2f\n", r);

printf("Area da esfera: %.3f\n", a);
printf("Volume da esfera: %.3f\n", v);
return 0;
}
