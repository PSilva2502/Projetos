#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	double n1, n2, n3, media;

	printf("Digite o primerio numero: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	printf("Digite o terceiro numero: ");
	scanf("%d", &n3);
	
	media = (n1 + n2 + n3) / 3;
	
	printf("A media aritmetica foi %.1d", media);
}
