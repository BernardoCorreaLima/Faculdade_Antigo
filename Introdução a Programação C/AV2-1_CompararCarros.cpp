#include <stdio.h>
#include <string.h>
#include <locale.h>

//Um colecionador de carros deseja realizar uma  pesquisa referentes as caracter�sticas dos seus ve�culos.
//Fa�a um programa que o auxilie nessa miss�o.  Para tal, dever� ser solicitado de cada ve�culo: o seu nome (Sim! Colecionador costuma dar nomes aos seus carros!), a sua pot�ncia  (HP) e o seu pre�o de mercado.
//Sabe-se que ser� interrompida da solicita��o de dados quando for digitado uma pot�ncia (HP) igual a zero. 
//Ao final o programa dever� informar:
//- a m�dia de  pre�os dos ve�culos;
//- a  porcentagem de ve�culos com pot�ncia (HP) acima de 200;
//- o nome do ve�culo com maior pot�ncia

main ()
{
	setlocale(LC_ALL, "Portuguese");	
	
	char NOME [30], MAIOR [30];
	int HP=0, MPH;
	float PRECO, PRECSOM, MEDIA, PORCENTAGEM, TOTALHP=0, MAIS200=0;
	
	do {
		printf ("\nNome do Carro: ");
		scanf ("%s", &NOME);
		printf ("Pot�ncia Total: ");
		scanf ("%d", &HP);
		printf ("Pre�o do Ve�culo: R$");
		scanf ("%f", &PRECO);
		
		if (HP>MPH){
		    MPH = HP;
		    strcpy (MAIOR, NOME);}
		if (HP>0){
			TOTALHP++;}
		if (HP>200){
			MAIS200++;}
				    	    
		PRECSOM = PRECO+PRECSOM;	
	} while (HP!=0);
	
	PORCENTAGEM = (MAIS200/TOTALHP)*100;
	MEDIA = PRECSOM/TOTALHP;
	printf ("\nCarro Com Maior Pot�ncia: %s", MAIOR);
	printf ("\nPorcentagem de Carros com Pot�ncia Maior que 200: %.0f", PORCENTAGEM);
	printf ("\nM�dia do Pre�o dos Carros: R$%.2f", MEDIA);
}
