#include <stdio.h>
#include <stdlib.h>




float calcularTriangulo(float altura, float base)
{
	
	 float area = (altura * base) / 2;
	 return area;
}
int main(void) {
	
	
	float altura, base;
	
	printf("Valor da Base : ");
    scanf("%f", &base);
    
	printf("Valor da Altura : ");
	scanf("%f", &altura);
	
	
	printf("O valor da area do Triangulo : %.2f cm ", calcularTriangulo(altura,base));
	return 0;
}
