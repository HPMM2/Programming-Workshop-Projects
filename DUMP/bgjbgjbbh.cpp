/*Programa que crea un archivo de acceso secuencial*/
#include <stdio.h>
main()
{
  int cuenta;
  char nombre[30];
  double saldo;
  FILE *ptrCf;
  if((ptrCf = fopen("cliente.txt","w")) ==NULL)
  {
  	printf("El archivo no pudo arbirse");
  }
  else
  {
  	printf("Numero de cuenta, el nombre y el saldo\n");
  	printf("Introduzca EOF al final de la entrada\n");
printf("?\n");
  	scanf("%d %s %lf", &cuenta, &nombre, &saldo);
while(!feof(stdin))
	  {
	 	fprintf(ptrCf,"%d %s %.2f\n" ,cuenta, nombre, saldo);
  		printf("?");
  		scanf("%d %s %lf", &cuenta, &nombre, &saldo);
  	  }
  	fclose(ptrCf);
  }
 
}

