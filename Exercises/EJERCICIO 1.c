/*
Escribe un programa en C que permita generar la tabla de multiplicar de un número
entero positivo, comenzando desde 1.
*/

#include<stdio.h>
#include<windows.h>

main()
{
	int i, r, mul, num;
	

		printf("Dame el n%cmero de la tabla de multiplicar que deseas conocer: ", 163);
		scanf("%d", &num);
	
		printf("Dame el n%cmero hasta donde deseas que pare: ", 163);
		scanf("%d", &mul);	
		
			
		for(i=1; i<=mul; i++)
		{
			r=num*i;
			printf("%d  x  %d  =  %d\n", num, i, r);
	 	} 


	

}


