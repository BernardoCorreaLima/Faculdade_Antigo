#include<stdio.h>
#include<locale.h>

//Utilizando void para calcular nota média final.

float NOTA1, NOTA2;
void LEITURA ( )
{
	printf ("Digite primeira nota: ");
		scanf ("%f", &NOTA1);
	printf ("Digite segunda nota: ");
		scanf ("%f", &NOTA2);
}
int main ( )
{
	setlocale(LC_ALL, "Portuguese");
	
	float MEDIA;
	LEITURA ( );
	MEDIA = (NOTA1 + NOTA2)/2;
	printf ("Sua média é: %.1f", MEDIA);
}
