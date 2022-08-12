#include <stdio.h>
#include <stdlib.h>



int main(void) 

{
	float salario, nv_salario, p_aumento, aumento;
	
	printf("Digite o salario atual do funcionario: ");
	scanf("%f", &salario);
	
	printf("Digite a porcentagem de aumento salarial: ");
	scanf("%f", &p_aumento);
	
	aumento = salario * p_aumento / 100;
	nv_salario = salario + aumento;
	
	printf("\nO novo salario do funcionario e %.2f", nv_salario);
}
