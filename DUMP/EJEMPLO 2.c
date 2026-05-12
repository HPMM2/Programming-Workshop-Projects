/*
Inicialización de un arreglo con una lista de valores
*/


#include <stdio.h>
#include <stdlib.h>
main()
{
  int n[10]={32,27,64,18,95,14,90,72,60,37};
  int i;
  printf("Inicializando arreglo en 0\n\n");
  printf("%s %13s\n","Elemento", "Valor"); 
for(i=0;i<10;i++)
  {
	printf("%7d%13d\n", i,n[i]);
  } 
  system("PAUSE");
}

