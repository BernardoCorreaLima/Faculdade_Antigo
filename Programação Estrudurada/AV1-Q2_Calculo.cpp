#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//Fa�a um programa em C criando as 3 fun��es da quest�o 1 F,G e H na forma recursiva
//e mais uma fun��o I na forma n�o recursiva que recebe um inteiro positivo e calcula a
//soma de todos os n�meros �mpares menores ou iguais a este n�mero.
//No programa principal deve aparecer uma mensagem pedindo 4 n�meros inteiros positivos a,b,c e d
//e ler estes n�meros .Enquanto os quatro n�meros n�o forem todos positivos deve
//aparecer a mensagem de novo at� que todos sejam positivos.
//Ap�s isto deve ser guardado na vari�vel inteira resultado o seguinte c�lculo :
//Resultado = (F(b)-G(a)+H(d))*I(c) Depois disso deve aparecer a seguinte frase
//�Utilizando os valores de a=Valor de a,b=Valor de b,c= Valor de c,d=Valor de d temos o resultado=resultado�

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
	int CONT, SOMA=0; //Muito importante atribuir =0 para SOMA, Dev++ tem um mau habito de atribuir n�meros aleat�rios
	                  // na mem�ria para vari�veis vazias.  Outros compiladores podem n�o ter esse problema.
	for (CONT=1;CONT<=N;CONT=CONT+1)
	{if (CONT % 2 == 1)
	    SOMA=SOMA+CONT;}
	return SOMA;
}
main () 
{
	int A=0, B=0, C=0, D=0, RESULTADO;
	
	setlocale (LC_ALL, "Portuguese");
	
	while (A<=0) {printf ("Digite v�riavel A: "); scanf ("%d", &A);}
	while (B<=0) {printf ("Digite v�riavel B: "); scanf ("%d", &B);}
	while (C<=0) {printf ("Digite v�riavel C: "); scanf ("%d", &C);}
	while (D<=0) {printf ("Digite v�riavel D: "); scanf ("%d", &D);}
    
    RESULTADO = (F(B)-G(A)+H(D))*I(C);
    
    printf ("\nUtilizando os valores de A=%d ,B=%d, C=%d, D=%d temos o RESULTADO=%d", A, B, C, D, RESULTADO);
}

