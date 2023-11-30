#include <stdio.h>
#include <locale.h>

int VAL01 (int CPF_01[11])
{
	int I, N=10, SOMA=0, RESTO=0;
	
	for (I=0;I<9;I++) {SOMA+=CPF_01[I]*N; N--;}
		RESTO=SOMA*10%11;
	
	if (RESTO==CPF_01[9]) 
		return 0;
	else
		return 1;
}

int VAL02 (int CPF_02[11])
{
	int I, N=11, SOMA=0, RESTO=0;
	
	for (I=0;I<10;I++) {SOMA+=CPF_02[I]*N; N--;}
		RESTO=SOMA*10%11;

	if (RESTO==CPF_02[10])
		return 0;
	else
		return 1;
}

main ()
{
	char CPF_VETOR [11];
	int I, CPF_NUM [11];
	
	setlocale (LC_ALL, "Portuguese");
	
	printf ("Insira seu CPF: "); scanf ("%s", CPF_VETOR);
		
	for (I=0;I<11;I++) {CPF_NUM[I]=CPF_VETOR[I]-48;}
	
	if (VAL01 (CPF_NUM)==0 && VAL02 (CPF_NUM)==0)
		printf ("\nO CPF é válido para ser utilizado");
		else
			if (VAL01 (CPF_NUM)==1)
				printf ("\nO primeiro dígito verificador é inválido");
			if (VAL02 (CPF_NUM)==1)
				printf ("\nO segundo dígito verificador é inválido");
}
