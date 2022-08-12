#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	float bs_salario, s_final, imposto;
	
	printf("Digite o seu salario: ");
 	scanf("%f", &bs_salario);
 	
 	imposto = (bs_salario * 0.5);
 	s_final = bs_salario - imposto * 0.11;
 	
 	printf("Seu salario final e de %.2f Reais ", s_final);
}
