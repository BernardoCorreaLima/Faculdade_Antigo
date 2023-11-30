#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <locale.h>

struct LISTA_CLIENTES
{
	char NOME[50], END[50], TELEFONE[50];
	int IDADE;
};

int main ()
{
	struct LISTA_CLIENTES CLIENTE[10];
	int I;
	FILE *LISTA;
	
	setlocale (LC_ALL, "Portuguese");
	

	for (I=0;I<10;I++)
	{
		printf ("\n====CLIENTE %d=====\n", I+1);
		printf ("Nome: "); scanf (" %[^\n]", CLIENTE[I].NOME);
		printf ("Idade: "); scanf ("%d", &CLIENTE[I].IDADE);
		printf ("Endereço: "); scanf (" %[^\n]", CLIENTE[I].END);
		printf ("Telefone: "); scanf (" %[^\n]", CLIENTE[I].TELEFONE);
	}
	
	LISTA=fopen("Clientes.txt", "w");
	    for (I=0;I<10;I++)
	    	{fprintf (LISTA, "Cliente %d: %s - %d - %s - %s\n", I+1, CLIENTE[I].NOME, CLIENTE[I].IDADE, CLIENTE[I].END, CLIENTE[I].TELEFONE);}
	fclose(LISTA);
}
