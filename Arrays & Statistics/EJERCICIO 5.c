#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>


main()
{//inicio del main
	int ac=0, nac=0, i, n, calif, promg, may, por;
	
	printf("¿Cuantos alumnos hay? ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{//inicio del for
		printf("Dame la calificacion del alumno %d (ex. 1300)", i);
		scanf("%d", &calif);
		
		
		if(calif>=1300)
		{//inicio del if
			ac=ac+1;
		}//fin del if
		else
		{//inicio del else
			nac=nac+1;
		}//fin del else
		if(calif>=1500)
		{
			may=may+1;
		}
		else
		{
			calif=calif+1;
		}
		

	}//fin del for
	

	promg = calif/n;
	
	por = ac/100;
	

	
	printf("El promedio general del grupo fue: %d\n", promg);

	printf("El porcentaje de alumnos aprobados: %d\n", por);
	
	printf("El numero de alumnos cuya calificacion fue mayor o igual a 1500:  %d\n", may);
}//fin del main




