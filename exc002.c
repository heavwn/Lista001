#include <stdio.h>
#include <math.h>

int main(){
float x1,x2,y1,y2, dis;

printf("Informe o primeiro ponto de X (x1): ");
	scanf("%f", &x1);
printf("Informe o segundo ponto de X (x2): ");
	scanf("%f", &x2);
printf("Informe o primeiro ponto de Y (y1): ");
	scanf("%f", &y1);
printf("Informe o segundo ponto de Y (y2): ");
	scanf("%f", &y2);

dis = sqrt(pow(x2-x1,2) + pow(y2-y1,2));

printf("A distancia entre os pontos eh de: %.4f", dis);

return 0;
}
