#include <stdio.h>
#include <locale.h>

//Montar um programa que receba 3 números e apresente o menu de opções ao usuário:

//Como deseja imprimir os números?
//1 - Ordem crescente
//2 - Ordem descrescente
//3 - Ordem de entrada dos números

//O programa deverá imprimir os números de acordo com a opção escolhida pelo usuário.
//Obs.: Fazer com switch..case

int main () {

	char MENU;
	float N1, N2, N3;
	setlocale(LC_ALL, "Portuguese");
	
	printf ("Insira Primeiro Número: ");
		scanf ("%f", &N1);
	printf ("Insira Segundo Número: ");
		scanf ("%f", &N2);
	printf ("Insira Terceiro Número: ");
		scanf ("%f", &N3);
	printf (" \nComo Deseja Imprimir os Números: \n");
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
