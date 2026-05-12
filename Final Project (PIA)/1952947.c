/*
Heidi Pamela Martinez Martinez 1952947

Taller de Programacion - 002

*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>



//variables
int BENE();
int MAY();
int MEN();
int MA1, MA2, MA3, MA4, MA5, MA6, MA7, MA8, MA9, MA10, MA11, MA12;
int MB1, MB2, MB3, MB4, MB5, MB6, MB7, MB8, MB9, MB10, MB11, MB12;
int MC1, MC2, MC3, MC4, MC5, MC6, MC7, MC8, MC9, MC10, MC11, MC12;
int MD1, MD2, MD3, MD4, MD5, MD6, MD7, MD8, MD9, MD10, MD11, MD12;
int ME1, ME2, ME3, ME4, ME5, ME6, ME7, ME8, ME9, ME10, ME11, ME12;

int ANUAL, MES1, MES2, MES3, MES4, MES5, MES6, MES7, MES8, MES9, MES10, MES11, MES12;



main()
{
 
//--------------------------- VENTAS MENSUALES Y ANUAL -----------------------------------

		printf("Cuantas ventas del mes 1 tuvo el departamento 1 : ");
		scanf("%d", &MA1);
		printf("Cuantas ventas del mes 2 tuvo el departamento 1 : ");
		scanf("%d", &MA2);	
		printf("Cuantas ventas del mes 3 tuvo el departamento 1 : ");
		scanf("%d", &MA3);	
		printf("Cuantas ventas del mes 4 tuvo el departamento 1 : ");
		scanf("%d", &MA4);	
		printf("Cuantas ventas del mes 5 tuvo el departamento 1 : ");
		scanf("%d", &MA5);	
		printf("Cuantas ventas del mes 6 tuvo el departamento 1 : ");
		scanf("%d", &MA6);	
		printf("Cuantas ventas del mes 7 tuvo el departamento 1 : ");
		scanf("%d", &MA7);	
		printf("Cuantas ventas del mes 8 tuvo el departamento 1 : ");
		scanf("%d", &MA8);	
		printf("Cuantas ventas del mes 9 tuvo el departamento 1 : ");
		scanf("%d", &MA9);	
		printf("Cuantas ventas del mes 10 tuvo el departamento 1 : ");
		scanf("%d", &MA10);	
		printf("Cuantas ventas del mes 11 tuvo el departamento 1 : ");
		scanf("%d", &MA11);	
		printf("Cuantas ventas del mes 12 tuvo el departamento 1 : \n");
		scanf("%d", &MA12);	
		
		printf("Cuantas ventas del mes 1 tuvo el departamento 2 : ");
		scanf("%d", &MB1);
		printf("Cuantas ventas del mes 2 tuvo el departamento 2 : ");
		scanf("%d", &MB2);	
		printf("Cuantas ventas del mes 3 tuvo el departamento 2 : ");
		scanf("%d", &MB3);	
		printf("Cuantas ventas del mes 4 tuvo el departamento 2 : ");
		scanf("%d", &MB4);	
		printf("Cuantas ventas del mes 5 tuvo el departamento 2 : ");
		scanf("%d", &MB5);	
		printf("Cuantas ventas del mes 6 tuvo el departamento 2 : ");
		scanf("%d", &MB6);	
		printf("Cuantas ventas del mes 7 tuvo el departamento 2 : ");
		scanf("%d", &MB7);	
		printf("Cuantas ventas del mes 8 tuvo el departamento 2 : ");
		scanf("%d", &MB8);	
		printf("Cuantas ventas del mes 9 tuvo el departamento 2 : ");
		scanf("%d", &MB9);	
		printf("Cuantas ventas del mes 10 tuvo el departamento 2 : ");
		scanf("%d", &MB10);	
		printf("Cuantas ventas del mes 11 tuvo el departamento 2 : ");
		scanf("%d", &MB11);	
		printf("Cuantas ventas del mes 12 tuvo el departamento 2 : \n");
		scanf("%d", &MB12);																
	
		printf("Cuantas ventas del mes 1 tuvo el departamento 3 : ");
		scanf("%d", &MC1);
		printf("Cuantas ventas del mes 2 tuvo el departamento 3 : ");
		scanf("%d", &MC2);	
		printf("Cuantas ventas del mes 3 tuvo el departamento 3 : ");
		scanf("%d", &MC3);	
		printf("Cuantas ventas del mes 4 tuvo el departamento 3 : ");
		scanf("%d", &MC4);	
		printf("Cuantas ventas del mes 5 tuvo el departamento 3 : ");
		scanf("%d", &MC5);	
		printf("Cuantas ventas del mes 6 tuvo el departamento 3 : ");
		scanf("%d", &MC6);	
		printf("Cuantas ventas del mes 7 tuvo el departamento 3 : ");
		scanf("%d", &MC7);	
		printf("Cuantas ventas del mes 8 tuvo el departamento 3 : ");
		scanf("%d", &MC8);	
		printf("Cuantas ventas del mes 9 tuvo el departamento 3 : ");
		scanf("%d", &MC9);	
		printf("Cuantas ventas del mes 10 tuvo el departamento 3 : ");
		scanf("%d", &MC10);	
		printf("Cuantas ventas del mes 11 tuvo el departamento 3 : ");
		scanf("%d", &MC11);	
		printf("Cuantas ventas del mes 12 tuvo el departamento 3 : \n");
		scanf("%d", &MC12);	
		
		
		printf("Cuantas ventas del mes 1 tuvo el departamento 4 : ");
		scanf("%d", &MD1);
		printf("Cuantas ventas del mes 2 tuvo el departamento 4 : ");
		scanf("%d", &MD2);	
		printf("Cuantas ventas del mes 3 tuvo el departamento 4 : ");
		scanf("%d", &MD3);	
		printf("Cuantas ventas del mes 4 tuvo el departamento 4 : ");
		scanf("%d", &MD4);	
		printf("Cuantas ventas del mes 5 tuvo el departamento 4 : ");
		scanf("%d", &MD5);	
		printf("Cuantas ventas del mes 6 tuvo el departamento 4 : ");
		scanf("%d", &MD6);	
		printf("Cuantas ventas del mes 7 tuvo el departamento 4 : ");
		scanf("%d", &MD7);	
		printf("Cuantas ventas del mes 8 tuvo el departamento 4 : ");
		scanf("%d", &MD8);	
		printf("Cuantas ventas del mes 9 tuvo el departamento 4 : ");
		scanf("%d", &MD9);	
		printf("Cuantas ventas del mes 10 tuvo el departamento 4 : ");
		scanf("%d", &MD10);	
		printf("Cuantas ventas del mes 11 tuvo el departamento 4 : ");
		scanf("%d", &MD11);	
		printf("Cuantas ventas del mes 12 tuvo el departamento 4 : \n");
		scanf("%d", &MD12);	
		
		
		printf("Cuantas ventas del mes 1 tuvo el departamento 5 : ");
		scanf("%d", &ME1);
		printf("Cuantas ventas del mes 2 tuvo el departamento 5 : ");
		scanf("%d", &ME2);	
		printf("Cuantas ventas del mes 3 tuvo el departamento 5 : ");
		scanf("%d", &ME3);	
		printf("Cuantas ventas del mes 4 tuvo el departamento 5 : ");
		scanf("%d", &ME4);	
		printf("Cuantas ventas del mes 5 tuvo el departamento 5 : ");
		scanf("%d", &ME5);	
		printf("Cuantas ventas del mes 6 tuvo el departamento 5 : ");
		scanf("%d", &ME6);	
		printf("Cuantas ventas del mes 7 tuvo el departamento 5 : ");
		scanf("%d", &ME7);	
		printf("Cuantas ventas del mes 8 tuvo el departamento 5 : ");
		scanf("%d", &ME8);	
		printf("Cuantas ventas del mes 9 tuvo el departamento 5 : ");
		scanf("%d", &ME9);	
		printf("Cuantas ventas del mes 10 tuvo el departamento 5 : ");
		scanf("%d", &ME10);	
		printf("Cuantas ventas del mes 11 tuvo el departamento 5 : ");
		scanf("%d", &ME11);	
		printf("Cuantas ventas del mes 12 tuvo el departamento 5 : \n");
		scanf("%d", &ME12);	
						
	MES1=MA1+MB1+MC1+MD1+ME1;
	MES2=MA2+MB2+MC2+MD2+ME2;
	MES3=MA3+MB3+MC3+MD3+ME3;
	MES4=MA4+MB4+MC4+MD4+ME4;
	MES5=MA5+MB5+MC5+MD5+ME5;
	MES6=MA6+MB6+MC6+MD6+ME6;
	MES7=MA7+MB7+MC7+MD7+ME7;
	MES8=MA8+MB8+MC8+MD8+ME8;
	MES9=MA9+MB9+MC9+MD9+ME9;
	MES10=MA10+MB10+MC10+MD10+ME10;
	MES11=MA11+MB11+MC11+MD11+ME11;
	MES12=MA12+MB12+MC12+MD12+ME12;
					

	ANUAL= MES1+MES2+MES3+MES4+MES5+MES6+MES7+MES8+MES9+MES10+MES11+MES12;
		
	printf("Las ventas mensuales de Enero de la fabrica son : %d \n", MES1);
	printf("Las ventas mensuales de Febrero de la fabrica son : %d \n", MES2);
	printf("Las ventas mensuales de Marzo de la fabrica son : %d \n", MES3);
	printf("Las ventas mensuales de Abril de la fabrica son : %d \n", MES4);
	printf("Las ventas mensuales de Mayo de la fabrica son : %d \n", MES5);
	printf("Las ventas mensuales de Junio de la fabrica son : %d \n", MES6);
	printf("Las ventas mensuales de Julio de la fabrica son : %d \n", MES7);
	printf("Las ventas mensuales de Agosto de la fabrica son : %d \n", MES8);
	printf("Las ventas mensuales de Septiembre de la fabrica son : %d \n", MES9);
	printf("Las ventas mensuales de Octubre de la fabrica son : %d \n", MES10);
	printf("Las ventas mensuales de Noviembre de la fabrica son : %d \n", MES11);
	printf("Las ventas mensuales de Diciembre de la fabrica son : %d \n", MES12);
		
	
	printf("La venta anual de la fabrica es : %d \n ", ANUAL);
	
	BENE();

}

 
//--------------------------- DEPARTAMENTO CON MAS GANANCIA EN JULIO -----------------------------------
BENE()
{
	if (MA7>MB7)
	{
		printf("El departamento 1 tuvo mayor venta en el mes de Julio con la cantidad de : %d \n", MA7);
		if(MB7>MC7)
		{
			printf("El departamento 2 tuvo mayor venta en el mes de Julio con la cantidad de : %d \n", MB7);
			if(MC7>MD7)
			{
				printf("El departamento 3 tuvo mayor venta en el mes de Julio con la cantidad de : %d \n", MC7);
				if(MD7>ME7)
				{
					printf("El departamento 4 tuvo mayor venta en el mes de Julio con la cantidad de : %d \n", MD7);
				}else
				{
					printf("El departamento 5 tuvo mayor venta en el mes de Julio con la cantidad de : %d \n", ME7);

				}
			}
		}
	}
	MAY();	
}
		



//--------------------------- MAYORES EN DEPT 3 -----------------------------------
MAY()
{
			
	if (MC1>MC2)
	{
		printf("El departamento 3 tuvo mayor venta en el mes Enero \n");
		if(MC2>MC3)
		{
			printf("El departamento 3 tuvo mayor venta en el mes Febrero \n");
			if(MC3>MC4)
			{
				printf("El departamento 3 tuvo mayor venta en el mes Marzo \n");
				if(MC4>MC5)
				{
					printf("El departamento 3 tuvo mayor venta en el mes Abril \n");
					if(MC5>MC6)
					{
						printf("El departamento 3 tuvo mayor venta en el mes Mayo \n");
						if(MC6>MC7)
						{
							printf("El departamento 3 tuvo mayor venta en el mes Junio \n");
							if(MC7>MC8)
							{
								printf("El departamento 3 tuvo mayor venta en el mes Julio \n");
								if(MC8>MC9)
								{
									printf("El departamento 3 tuvo mayor venta en el mes Agosto \n");
									if(MC9>MC10)
									{
										printf("El departamento 3 tuvo mayor venta en el mes Septiembre \n");
										if(MC10>MC11)
										{
											printf("El departamento 3 tuvo mayor venta en el mes Octubre \n");
											if(MC11>MC12)
											{
												printf("El departamento 3 tuvo mayor venta en el mes Noviembre \n");
											}else
											{
												printf("El departamento 3 tuvo mayor venta en el mes Diciembre \n");	
		
													}		
										}
										
					
												}			
									}	
								}	
							}	
					}
					
				
				}
			}
		}
	}	
	
	MEN();
}




//--------------------------- MENORES EN DEPT 3 -----------------------------------		
MEN()
{
			
	if (MC1<MC2)
	{
		printf("El departamento 3 tuvo menores venta en el mes Enero \n");
		if(MC2<MC3)
		{
			printf("El departamento 3 tuvo menores venta en el mes Febrero \n");
			if(MC3<MC4)
			{
				printf("El departamento 3 tuvo menores venta en el mes Marzo \n");
				if(MC4<MC5)
				{
					printf("El departamento 3 tuvo menores venta en el mes Abril \n");
					if(MC5<MC6)
					{
						printf("El departamento 3 tuvo menores venta en el mes Mayo \n");
						if(MC6<MC7)
						{
							printf("El departamento 3 tuvo menores venta en el mes Junio \n");
							if(MC7<MC8)
							{
								printf("El departamento 3 tuvo menores venta en el mes Julio \n");
								if(MC8<MC9)
								{
									printf("El departamento 3 tuvo menores venta en el mes Agosto \n");
									if(MC9<MC10)
									{
										printf("El departamento 3 tuvo menores venta en el mes Septiembre \n");
										if(MC10<MC11)
										{
											printf("El departamento 3 tuvo menores venta en el mes Octubre \n");
											if(MC11<MC12)
											{
												printf("El departamento 3 tuvo menores venta en el mes Noviembre \n");
											}else
											{
												printf("El departamento 3 tuvo menores venta en el mes Diciembre \n");	
		
													}		
										}
										
					
												}			
									}	
								}	
							}	
					}
					
				
				}
			}
		}
	}	
		
	
	}


	


