/*
En una bodega en Tarija, Bolivia, manejan información sobre las cantidades producidas 
de cada tipo de vino en los últimos años. Escribe un programa en C que permita 
calcular lo siguiente: 

a.	El total producido de cada tipo de vino en los últimos años.
b.	El total de la producción anual de los últimos años.
*/

#include<stdio.h>
#include<windows.h>



main()
{
	int N, i, vino=0, vinot=0; 
	
	printf("Cuantos tipos de vinos hay?\n ");
	scanf("%d", &N);
	
	for(i=1; i<=N; i++)
	{
		printf("Ingrese cuanto vino %d fue producido al a%co\n\n ", i, 164);
		scanf("%d", &vino);
		
		printf("El total producido del vino %d en este a%co fue: %d\n\n ", i, 164, vino);
		
		vinot+=+vino;
	} 
	
		printf("El total producido anualmente fue: %d\n ",  vinot);
		

	system("pause");
	system("cls");//limpieza cada ciclo
	
	int res;//declaracion tipo local
	
	do{
		printf("\n¿Quieres volver a empezar?\n 1 - SI\n 2 - NO\n");
		scanf("%d",&res);	
	
	if (res<1|| res>2)
	{
		printf("Error rango fuera de 1-2, intente de nuevo");

				
	system("pause");
	system("cls");//limpieza cada ciclo
	}
	}while(res<1|| res>2);	
	
	if (res==1)
	{
		return main();
	}
	else 
	{
		return 0;
	}
}
	

