#include <stdio.h>
#include <locale.h>

main ()
{
	float X, *P;
	
	setlocale (LC_ALL, "Portuguese");
	
	printf  ("Insira um n�mero na v�riavel X: "); scanf ("%f", &X);
	P=&X;
	X=*P/3;
	printf ("O endere�o de P � de %p , o valor de X � de %.2f", P, X);
}
