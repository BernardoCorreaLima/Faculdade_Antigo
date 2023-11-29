#include <stdio.h>
#include <locale.h>

//Considere um caixa autom�tico com apenas um reposit�rio com capacidade para armazenar 1000 notas de 10 reais.
//Elabore um programa para ler um valor e fornecer a quantidade de notas correspondente a esse valor.
//O seu programa deve manter a quantidade de notas no reposit�rio atualizada.
//Caso o valor lido n�o possa ser fornecido por falta de notas, o programa deve imprimir uma mensagem indicando o fato. 
//O programa tamb�m deve imprimir uma mensagem se o valor n�o for m�ltiplo de 10.
//Ap�s o tratamento do valor lido, com a impress�o da mensagem ou o fornecimento das notas correspondentes,
//o procedimento deve ser repetido. O programa deve parar quando um valor lido for negativo. 
//Obs: Para alguma opera��o (a sua escolha) utilize fun��o.

int op (int *VT, int *NO, int RES, int SA)
{
	RES = SA % 10;
    if (RES==0)
	{
		*NO = *NO-(SA/10);
		*VT = *VT-SA;
	}
	else {printf ("Por favor, insira um n�mero multiplo de 10.\n");}
}

main ()
{
	setlocale(LC_ALL, "Portuguese");
	int VALORTOTAL = 1000, NOTAS = 100, RESTO, SAQUE;
	
	while (VALORTOTAL != 0)	
    {
		printf ("\nValor Total: %d.00\n", VALORTOTAL);
		printf ("Notas Disponiveis: %d\n", NOTAS);
		printf ("Quantidade para Saque: R$"); scanf ("%d", &SAQUE);
		op (&VALORTOTAL, &NOTAS, RESTO, SAQUE);
    }
}
