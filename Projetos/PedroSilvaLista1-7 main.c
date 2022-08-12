#include <stdio.h>
#include <stdlib.h>



int main(void) 
{
	float bs_retangulo, a_retangulo; /* base e altura de um retangulo, respectivamente */
	float area, perimetro;
	
	printf("Digite o valor da base do reatangulo: ");
	scanf("%f", &bs_retangulo);
	
	printf("Digite a altura do reatangulo: ");
	scanf("%f", &a_retangulo);
	
	perimetro = 2 * bs_retangulo + 2 * a_retangulo;
	area = bs_retangulo * a_retangulo;

	printf("\nA Area do retangulo foi: %.2f", area);
}
