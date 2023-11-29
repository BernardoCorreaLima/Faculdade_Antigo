#include <stdio.h>
#include <locale.h>

//Montar um programa para imprimir uma lista, onde todos os parâmetros serão informados pelo usuário. Exemplo:
//Valor inicial: 1  | Valor final: 10  |  Incremento: 1  |  Ordem: Ascendente  Resultado: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
//Valor inicial: 2  | Valor final: 20  |  Incremento: 2  |  Ordem: Descendente  Resultado: 20, 18, 16, 14, 12, 10, 8, 6, 4, 2

main ()	
{
	setlocale(LC_ALL, "Portuguese");
	
	int INI, FIN, INC, NUM, MENU;
	
	printf ("Valor Inicial: "); scanf ("%d", &INI);
	printf ("Valor Final: "); scanf ("%d", &FIN);
	printf ("Incremento: "); scanf ("%d", &INC);
	
	printf ("\n------Escolha uma Operação------\n");
	printf ("1) Crescente\n");
	printf ("2) Decrescente\n");
	printf ("Sua Opção: "); scanf ("%d", &MENU);
	printf ("\n");
	
	switch (MENU){
		case 1:{
		    for (NUM=INI; NUM<=FIN; NUM+=INC)
	        	printf ("%d ", NUM);
			    	break; }
		case 2:{
			for (NUM=FIN; NUM>=INI; NUM-=INC)
	        	printf ("%d  ", NUM);
			    	break; }
		default:{
				printf ("Operação Inválida");
					break; }	    
	}
}
