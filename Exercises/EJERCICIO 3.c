/*
Una empresa dedicada a la venta localidades por teléfono e Internet maneja
seis tipos de localidades para un circo ubicado en la zona sur de la Ciudad 
de México. Algunas de las zonas del circo tienen el mismo precio, pero se 
manejan diferentes para administrar eficientemente la asignación de los 
asientos. Los precios de cada localidad y los datos referentes a la venta 
de boletos para la próxima función se manejan de la siguiente forma:

Donde: 
	L1,	L2,	L3,	L4,	L5	y	L6
	CLA1,	CAN1					
	CLA2,	CAN2					
	. . .	. . .					
	0,	0	
					
Escriba un programa en C que realice lo siguiente:
a.	Calcula el monto correspondiente de cada venta.
b.	Obtenga el número de boletos vendidos para cada una de las localidades.
c.	Obtenga la recaudación total.
*/

#include<stdio.h>
#include<windows.h>


main()
{
	int N, i, loc1=0, loc2=0, loc3=0, loc4=0, loc5=0, loc6=0, boleto, loc, boletot=0;
	
	printf("Cuantos boletos en total compro en las diferentes localidades?\n");
	scanf("%d", &N);
	
	for(i=1; i<=N; i++)
	{
		printf("Ingrese el monto del boleto %d\n", i);
		scanf("%d", &boleto);
		
	boletot+=+boleto;	
		do
		{
			printf("De cual de las 6 localidades es el boleto %d comprado?\n", i);
			scanf("%d", &loc);
	
		if(loc<1|| loc>6)
		{
			printf("Error rango fuera de 1-6, intente de nuevo\n");
		}
		}while(loc<1|| loc>6);
		
		
		if(loc==1)
		{
			loc1+=+1;
		}
		
			else if(loc==2)
			{
				loc2+=+1;
			}
		
				else if(loc==3)
				{
					loc3+=+1;
				}
		
					else if(loc==4)
					{
						loc4+=+1;
					}
		
						else if(loc==5)
						{
							loc5+=+1;
						}
						
							else if(loc==6)
							{
								loc6+=+1;
							}
	} 


		
	printf("La cantidad de boletos vendidos de la localidad 1 fueron: %d\n ", loc1);
	printf("La cantidad de boletos vendidos de la localidad 2 fueron: %d\n ", loc2);
	printf("La cantidad de boletos vendidos de la localidad 3 fueron: %d\n ", loc3);
	printf("La cantidad de boletos vendidos de la localidad 4 fueron: %d\n ", loc4);
	printf("La cantidad de boletos vendidos de la localidad 5 fueron: %d\n ", loc5);
	printf("La cantidad de boletos vendidos de la localidad 6 fueron: %d\n ", loc6);
	
	printf("El monto total de las ventas en las 6 localidades fue: %d\n ", boletot);	
}
