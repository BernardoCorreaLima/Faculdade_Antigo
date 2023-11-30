#include <stdio.h>
#include <locale.h>

main ()
{
	float X, *P;
	
	setlocale (LC_ALL, "Portuguese");
	
	printf  ("Insira um número na váriavel X: "); scanf ("%f", &X);
	P=&X;
	X=*P/3;
	printf ("O endereço de P é de %p , o valor de X é de %.2f", P, X);
}
