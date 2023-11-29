#include <stdio.h>
#include <locale.h>

//AV2-2 com funções

int incremento (int I, int F, int IN, int N, int M) 
{
	if (M==1) {
	    for (N=I; N<=F; N+=IN)
	         printf ("%d ", N); }
	else if (M==2) {
		for (N=F; N>=I; N-=IN)
	         printf ("%d  ", N); }
	else if (M!=0){
			printf ("Operação Inválida"); }         
}

main ()	
{
	setlocale(LC_ALL, "Portuguese");
	
	int INI, FIN, INC, NUM, MENU=1;
	
	while (MENU!=0)
	{	
		printf ("Valor Inicial: "); scanf ("%d", &INI);
		printf ("Valor Final: "); scanf ("%d", &FIN);
		printf ("Incremento: "); scanf ("%d", &INC);
	
		printf ("\n------Escolha uma Operação------\n");
		printf ("1) Crescente\n");
		printf ("2) Decrescente\n");
		printf ("0) Sair\n");
		printf ("Sua Opção: "); scanf ("%d", &MENU);
		printf ("\n");
			incremento (INI, FIN, INC, NUM, MENU);
		printf ("\n");
		printf ("\n");
	}
}
