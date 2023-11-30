#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//Faça um programa em C criando as 3 funções da questão 1 F,G e H na forma recursiva
//e mais uma função I na forma não recursiva que recebe um inteiro positivo e calcula a
//soma de todos os números ímpares menores ou iguais a este número.
//No programa principal deve aparecer uma mensagem pedindo 4 números inteiros positivos a,b,c e d
//e ler estes números .Enquanto os quatro números não forem todos positivos deve
//aparecer a mensagem de novo até que todos sejam positivos.
//Após isto deve ser guardado na variável inteira resultado o seguinte cálculo :
//Resultado = (F(b)-G(a)+H(d))*I(c) Depois disso deve aparecer a seguinte frase
//“Utilizando os valores de a=Valor de a,b=Valor de b,c= Valor de c,d=Valor de d temos o resultado=resultado”

int F (int N)
{	
	if (N==1)
		return 2;
	else
		return pow(N-1, 2)+F(N-1);
}

int G (int N)
{
	if (N==1 || N==2)
		return 1;
	else
		return 3*G(N-1)+2*G(N-2);
}

int H (int N)
{
	if (N==1)
		return 7;
	else
		return H(N-1)+3*N;
}

int I (int N)
{
	int CONT, SOMA=0; //Muito importante atribuir =0 para SOMA, Dev++ tem um mau habito de atribuir números aleatórios
	                  // na memória para variáveis vazias.  Outros compiladores podem não ter esse problema.
	for (CONT=1;CONT<=N;CONT=CONT+1)
	{if (CONT % 2 == 1)
	    SOMA=SOMA+CONT;}
	return SOMA;
}
main () 
{
	int A=0, B=0, C=0, D=0, RESULTADO;
	
	setlocale (LC_ALL, "Portuguese");
	
	while (A<=0) {printf ("Digite váriavel A: "); scanf ("%d", &A);}
	while (B<=0) {printf ("Digite váriavel B: "); scanf ("%d", &B);}
	while (C<=0) {printf ("Digite váriavel C: "); scanf ("%d", &C);}
	while (D<=0) {printf ("Digite váriavel D: "); scanf ("%d", &D);}
    
    RESULTADO = (F(B)-G(A)+H(D))*I(C);
    
    printf ("\nUtilizando os valores de A=%d ,B=%d, C=%d, D=%d temos o RESULTADO=%d", A, B, C, D, RESULTADO);
}

