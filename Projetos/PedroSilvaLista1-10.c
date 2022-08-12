#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>





int main(void) {
	
	
	int num;
	
	printf("Digite um numero para realizar as operacoes : ");
	scanf("%i", &num);
	
	float quadrado = pow(num, 2);
	float cubo = pow(num, 3);
	float cubo_numero = cbrt(num);
	float raiz_quadrada = sqrt(num);
	
	printf("O numero digitado ao quadrado : %.4f \n", quadrado);
	printf("O numero digitado ao cubo : %.4f \n", cubo);
	printf("A raiz quadrada do numero digitado : %.4f \n", raiz_quadrada);
	printf("A raiz cubica do numero digitado : %.4f \n", cubo_numero);
	
	return 0;
}
