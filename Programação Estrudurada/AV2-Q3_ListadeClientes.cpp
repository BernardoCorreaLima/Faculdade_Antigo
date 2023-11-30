#include <stdio.h>
#include <string.h>
#include <locale.h>

struct LISTA_CLIENTES
{
	char NOME[50], END[50], TELEFONE[50];
	int IDADE;
};

int main ()
{
	struct LISTA_CLIENTES CLIENTE[100];
	int I, MENU;
	
	setlocale (LC_ALL, "Portuguese");
	
	do 
	{
		printf ("\nDeseja adicionar um cliente?\n");
		printf ("1)Sim\n");
		printf ("0)Não\n");
		printf ("Opção: "); scanf ("%d", &MENU);
			if (MENU==1 && I<100)
			{
				printf ("\n====CLIENTE %d=====\n", I+1);
				printf ("Nome: "); scanf (" %[^\n]", CLIENTE[I].NOME);
				printf ("Idade: "); scanf ("%d", &CLIENTE[I].IDADE);
				printf ("Endereço: "); scanf (" %[^\n]", CLIENTE[I].END);
				printf ("Telefone: "); scanf (" %[^\n]", CLIENTE[I].TELEFONE);
				I++;
			}
	}
	while (MENU!=0);
	
	printf ("\nO nome do sexto cliente é %s", CLIENTE[5].NOME);
	printf ("\nO endereço do nono cliente é %s", CLIENTE[8].END);
	printf ("\nA idade do terceiro cliente é %d", CLIENTE[2].IDADE);
	printf ("\nO telefone do quarto cliente é %s", CLIENTE[3].TELEFONE);
}
