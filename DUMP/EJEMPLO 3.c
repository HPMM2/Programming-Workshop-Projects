/*
Inicialización de un arreglo con una lista de valores
*/


//Imprime histograma
#include <stdio.h>
#include <stdlib.h>
main()
{
  int n[10]={19,3,15,7,11,9,13,5,17,1};
  int i,j;
  printf("%s %13s%17s\n","Elemento", "Valor","Histograma");
  for(i=0;i<10;i++)
  {
	printf("%7d%13d       ", i,n[i]);
for(j=1;j<=n[i];j++)
  {
	printf("%c",'*');
  } 
  printf("\n");
}
  system("PAUSE");
}

