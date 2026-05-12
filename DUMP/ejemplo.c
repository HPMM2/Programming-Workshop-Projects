/*
Inicialización de un arreglo en 0 para limpiarlos de cualquier valor en buffer
*/

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

main()
{
  int n[10],i;
  for(i=0;i<10;i++)
  {
  	n[i]=0;
  }
  printf("Inicializando arreglo en 0\n");
  printf("%s %13s\n","Elemento", "Valor");
  for(i=0;i<10;i++)
  {
  	printf("%7d%13d\n", i,n[i]);
  } 
  system("PAUSE");
}

  

