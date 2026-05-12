/*
Construye un programa en c que, al recibir como datos N números naturales, 
determine cuántos de ellos son positivos, negativos o nulos.
*/

#include<stdio.h>
#include<windows.h>


main()
{
	int N, i, positivos=0, negativos=0, nulos=0, num;
	
	printf("Cuantos n%cmeros desea ingresar\n ", 163);
	scanf("%d", &N);
	
	for(i=1; i<=N; i++)
	{
		printf("Ingrese el %d n%cmero\n", i, 163);
		scanf("%d", &num);
		
		if(num<0)
		{
			negativos+=+1;
		}
		
		else if(num==0)
		{
			nulos+=+1;
		}
		
		else
		{
			positivos+=+1;
		}
	} 

	printf("La cantidad de n%cmeros positivos fueron: %d\n ", 163, positivos);
	printf("La cantidad de n%cmeros negativos fueron: %d\n ", 163, negativos);
	printf("La cantidad de n%cmeros nulos fueron: %d\n ", 163, nulos);		
}
