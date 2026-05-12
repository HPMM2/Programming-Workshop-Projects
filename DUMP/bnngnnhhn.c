#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *archivo = fopen("ARCHIVO DE PRUEBA.txt", "w");
	int c;
	while ((c=fgetc(archivo))!= EOF)
	{
		putchar(c);
	}
	printf("\n\n\n");
	system("pause");

}
