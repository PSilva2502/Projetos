#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define PI 3.14





float raio(float raio_parametro)
{
	
	 float area = pow(raio_parametro, 2) *  PI;
	 return area;
}
int main(void) {
	
	
	float var_raio;
	
	printf("Digite o valor do raio de circunferencia : ");
    scanf("%f", &var_raio);
    
	
	printf("O Valor da area da circuferencia do raio : %.2f cm", raio(var_raio));
}
