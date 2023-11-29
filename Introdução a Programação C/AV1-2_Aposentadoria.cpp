#include <stdio.h>
#include <locale.h>

//Uma empresa quer verificar se um empregado est� qualificado para a aposentadoria ou n�o. 
//Para estar em condi��es, um dos seguintes requisitos deve ser satisfeito:

//- Ter no m�nimo 65 anos de idade. 
//- Ter trabalhado no m�nimo 30 anos. 
//- Ter no m�nimo 60 anos e ter trabalhado no m�nimo 25 anos. 

//Com base nas informa��es acima, fa�a um programa que leia: o ano atual, o ano de seu nascimento e o ano de seu ingresso na empresa. 

//O programa dever� escrever :
//- A idade do funcion�rio;
//- O tempo de trabalho do empregado;
//- A mensagem 'Apto para aposentadoria' ou 'N�o Apto para aposentadoria'.

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
	        	printf ("N�o Apto para aposentadoria");
}
