#include<stdio.h>
#include<locale.h>

//Utilizando void para calcular nota m�dia final.

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
	printf ("Sua m�dia �: %.1f", MEDIA);
}
