#include <stdio.h>
#include <string.h>
#include <locale.h>

//Um colecionador de carros deseja realizar uma  pesquisa referentes as características dos seus veículos.
//Faça um programa que o auxilie nessa missão.  Para tal, deverá ser solicitado de cada veículo: o seu nome (Sim! Colecionador costuma dar nomes aos seus carros!), a sua potência  (HP) e o seu preço de mercado.
//Sabe-se que será interrompida da solicitação de dados quando for digitado uma potência (HP) igual a zero. 
//Ao final o programa deverá informar:
//- a média de  preços dos veículos;
//- a  porcentagem de veículos com potência (HP) acima de 200;
//- o nome do veículo com maior potência

main ()
{
	setlocale(LC_ALL, "Portuguese");	
	
	char NOME [30], MAIOR [30];
	int HP=0, MPH;
	float PRECO, PRECSOM, MEDIA, PORCENTAGEM, TOTALHP=0, MAIS200=0;
	
	do {
		printf ("\nNome do Carro: ");
		scanf ("%s", &NOME);
		printf ("Potência Total: ");
		scanf ("%d", &HP);
		printf ("Preço do Veículo: R$");
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
	printf ("\nCarro Com Maior Potência: %s", MAIOR);
	printf ("\nPorcentagem de Carros com Potência Maior que 200: %.0f", PORCENTAGEM);
	printf ("\nMédia do Preço dos Carros: R$%.2f", MEDIA);
}
