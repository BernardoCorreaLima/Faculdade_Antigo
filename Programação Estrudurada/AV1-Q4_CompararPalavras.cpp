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
		printf ("\nOs 5 primeiros caracteres destas palavras s�o iguais entre si\n");
	
	if (strcmp(X, Y)==0)
		printf ("\nAs palavras s�o iguais");
	else
		{printf ("\nAs palavras s�o diferentes"); printf ("\nConcatena��o das palavras: %s",strcat(X,Y));}	
}
