#include <stdio.h>
#include <locale.h>

//Montar um programa que receba 3 n�meros e apresente o menu de op��es ao usu�rio:

//Como deseja imprimir os n�meros?
//1 - Ordem crescente
//2 - Ordem descrescente
//3 - Ordem de entrada dos n�meros

//O programa dever� imprimir os n�meros de acordo com a op��o escolhida pelo usu�rio.
//Obs.: Fazer com switch..case

int main () {

	char MENU;
	float N1, N2, N3;
	setlocale(LC_ALL, "Portuguese");
	
	printf ("Insira Primeiro N�mero: ");
		scanf ("%f", &N1);
	printf ("Insira Segundo N�mero: ");
		scanf ("%f", &N2);
	printf ("Insira Terceiro N�mero: ");
		scanf ("%f", &N3);
	printf (" \nComo Deseja Imprimir os N�meros: \n");
	printf ("\n1. Ordem Crescente");
	printf ("\n2. Ordem Decrescente");
	printf ("\n3. Ordem de Entrada \n \n");
		scanf ("%s", &MENU);
	printf ("\n");
	
	switch (MENU) {
	case '1': {
		if ((N1 <= N2) && (N2 <= N3))
			printf ("A Ordem dos Numeros e: %.0f %.0f %.0f", N1, N2, N3);
	
		else if ((N1 <= N3) && (N3 <= N2))
			printf ("A Ordem dos Numeros e: %.0f %.0f %.0f", N1, N3, N2);
	
		else if ((N2 <= N1) && (N1 <= N3))
			printf ("A Ordem dos Numeros e: %.0f %.0f %.0f", N2, N1, N3);
		
		else if ((N2 <= N3) && (N3 <= N1))
			printf ("A Ordem dos Numeros e: %.0f %.0f %.0f", N2, N3, N1);
	
		else if ((N3 <= N1) && (N1 <= N2))
			printf ("A Ordem dos Numeros e: %.0f %.0f %.0f", N3, N1, N2);
	
		else if ((N3 <= N2) && (N2 <= N1))
			printf ("A Ordem dos Numeros e: %.0f %.0f %.0f", N3, N2, N1);
		break;
	}
	case '2': {
		if ((N1 >= N2) && (N2 >= N3))
			printf ("A Ordem dos Numeros e: %.0f %.0f %.0f", N1, N2, N3);
	
		else if ((N1 >= N3) && (N3 >= N2))
			printf ("A Ordem dos Numeros e: %.0f %.0f %.0f", N1, N3, N2);
	
		else if ((N2 >= N1) && (N1 >= N3))
			printf ("A Ordem dos Numeros e: %.0f %.0f %.0f", N2, N1, N3);
		
		else if ((N2 >= N3) && (N3 >= N1))
			printf ("A Ordem dos Numeros e: %.0f %.0f %.0f", N2, N3, N1);
		
		else if ((N3 >= N1) && (N1 >= N2))
			printf ("A Ordem dos Numeros e: %.0f %.0f %.0f", N3, N1, N2);
		
		else if ((N3 >= N2) && (N2 >= N1))
			printf ("A Ordem dos Numeros e: %.0f %.0f %.0f", N3, N2, N1);
		break;
	}
	case '3': {
			printf ("A Ordem dos Numeros e: %.0f %.0f %.0f", N1, N2, N3);
		break;
	}
	default: {
			printf ("Escolha Invalida");
		break;
	}
	}
}
