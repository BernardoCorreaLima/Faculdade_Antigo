#include <stdio.h>
#include <locale.h>

//AV1-1 de Introdu��o a Programa��o da Universidade Unicarioca
//Fa�a um programa para ler o sal�rio fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. 
//Sabendo-se que ele recebe uma comiss�o de 3% sobre o total das vendas at� R$ 1.500,00 mais 5% sobre o que ultrapassar este valor, calcular e escrever o seu sal�rio total. 

int main () 
{
	float VENDA, SALA; 
	setlocale (LC_ALL, "Portuguese");
	
	printf ("Salario Fixo: R$");
		scanf ("%f", &SALA);
	
	printf ("Valor das Vendas: R$");
		scanf ("%f", &VENDA);
	
	if (VENDA < 1500)
		VENDA = VENDA*0.03;
     		else if (VENDA >= 1500)
     			VENDA = VENDA*0.05;
   
    SALA = SALA+VENDA; 
    
	printf ("\nSalario Final: R$%.2f", SALA);
}
