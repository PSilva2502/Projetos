#include <stdio.h>
#include <stdlib.h>



int main(void) 
{
	float tx_juros, v_deposito, v_rendimento, v_total;

	printf("Digite o valor do deposito: ");
	scanf("%f", &v_deposito);
	
	printf("Qual o valor da taxa de juros do deposito: ");
	scanf("%f", &tx_juros);
	
	tx_juros = tx_juros / 100;
	v_rendimento = v_deposito * tx_juros;
	v_total = v_deposito + v_rendimento;
	
	
	printf("\nO valor do juros foi de %.2f ", v_total);
	printf("\nO valor do deposito foi de %.2f", v_rendimento);
}
