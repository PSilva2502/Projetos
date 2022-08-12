#include <stdio.h>
#include <stdlib.h>



int main(void) 
{
	float n1, n2, n3, media, peso1, peso2, peso3;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	
	printf("Digite o peso da primeira nota: ");
	scanf("%f", &peso1);
	
	printf("Digite o peso da segunda nota: ");
	scanf("%f", &peso2);
	
	printf("Digite o peso da terceira nota: ");
	scanf("%f", &peso3);
	
	media = (n1 * peso1 + n2 * peso2 + n3 * peso3) / (peso1 + peso2 + peso3);
	
	printf("media ponderada do Aluno foi %.1f", media);
}
