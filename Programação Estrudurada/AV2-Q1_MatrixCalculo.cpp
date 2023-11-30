#include <stdio.h>
#include <locale.h>

main () 
{
	int M[3][4];
	int N[3][4];
	int O[3][4];
	int L, C;
	
	setlocale (LC_ALL, "Portuguese");
	
	for (L=0;L<3;L++)
		for (C=0;C<4;C++)
		{
			printf ("Insira número na linha %d , coluna %d da Matriz M: ", L+1, C+1); scanf ("%d", &M[L][C]);
		}

	for (L=0;L<3;L++)
		for (C=0;C<4;C++)
		{
			printf ("Insira número na linha %d , coluna %d da Matriz N: ", L+1, C+1); scanf ("%d", &N[L][C]);
		}

	printf ("\n\n O resultado da matriz O é: \n");

	for (L=0;L<3;L++)
	{
		for (C=0;C<4;C++)
		{
			O[L][C]=3*M[L][C]-5*N[L][C];
			printf ("%3d", O[L][C]);
		}
		printf ("\n");
	}
}
