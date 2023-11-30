#include <stdio.h>
#include <string.h>
#include <locale.h>

main ()
{
	char X [64], Y [64];
	
	setlocale (LC_ALL, "Portuguese");
	
	printf ("Escreva primeira palavra: "); gets (X);
	printf ("Escreva segunda palavra: "); gets (Y);
	
	if (strncmp(X, Y, 5)==0)
		printf ("\nOs 5 primeiros caracteres destas palavras são iguais entre si\n");
	
	if (strcmp(X, Y)==0)
		printf ("\nAs palavras são iguais");
	else
		{printf ("\nAs palavras são diferentes"); printf ("\nConcatenação das palavras: %s",strcat(X,Y));}	
}
