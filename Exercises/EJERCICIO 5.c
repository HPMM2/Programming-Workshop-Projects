/*
Construye un programa en C que escriba todos los valores positivos 
de T, P y R que satisfagan la siguiente expresión:

7*T^4 - 6*P^3 + 12*R^5 < 5850

*/

#include<stdio.h>
#include<windows.h>
#include<math.h>


main()
{
	
	int T, P, R, res;
	

	system("cls");//limpieza cada ciclo
	
	
	do{
	printf("Para la ecuacion 7*T^4 - 6*P^3 + 12*R^5 < 5850\n");
	printf("Ingrese un numero positivo numero para T\n");
	scanf("%d", &T);
	if(T<1)
	{
		printf("Error: ingrese un numero positivo. Intente de nuevo\n");
	}
	}while(T<1);
	
	
	do{
	printf("Ingrese un numero positivo numero para P\n");
	scanf("%d", &P);
	if(P<1)
	{
		printf("Error: ingrese un numero positivo. Intente de nuevo\n");
	}
	}while(P<1);


	do{
	printf("Ingrese un numero positivo numero para R\n");
	scanf("%d", &R);
	if(R<1)
	{
		printf("Error: ingrese un numero positivo. Intente de nuevo\n");
	}
	}while(R<1);
	
	
	res=7*pow(T, 4) - 6*pow(P, 4) + 12*pow(R, 4);
	
	if(res<5850)
	{
		printf("Los numero que usted ingreso dieron como resultado %d < 5850\n", res);		
	}
	else
	{
		printf("Los numero que usted ingreso no fueron validos para la ecuacion. Intente de nuevo\n");
		system("pause");
		main();

	}
}
