#include <stdio.h>
#include <locale.h>

//Uma empresa quer verificar se um empregado está qualificado para a aposentadoria ou não. 
//Para estar em condições, um dos seguintes requisitos deve ser satisfeito:

//- Ter no mínimo 65 anos de idade. 
//- Ter trabalhado no mínimo 30 anos. 
//- Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos. 

//Com base nas informações acima, faça um programa que leia: o ano atual, o ano de seu nascimento e o ano de seu ingresso na empresa. 

//O programa deverá escrever :
//- A idade do funcionário;
//- O tempo de trabalho do empregado;
//- A mensagem 'Apto para aposentadoria' ou 'Não Apto para aposentadoria'.

int main () {
	
	float IDADE, ANOA, ANOIN, SERVIC;
	setlocale(LC_ALL, "Portuguese");
	
	printf ("Ano Atual: ");
		scanf ("%f", &ANOA);
	printf ("Idade do Empregado(a): ");
		scanf ("%f", &IDADE);
	printf ("Ano de Ingresso na Empresa: ");
		scanf ("%f", &ANOIN);
	
	SERVIC = ANOA-ANOIN;
	
	if ((IDADE >= 65) || (SERVIC >= 30))
		printf ("Apto para aposentadoria");
	    	else if ((IDADE >= 60) && (SERVIC >= 25))
	    		printf ("Apto para aposentadoria");
	        else
	        	printf ("Não Apto para aposentadoria");
}
