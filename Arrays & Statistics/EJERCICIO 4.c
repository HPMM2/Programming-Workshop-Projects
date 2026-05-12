

//librerias
#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<stdlib.h>


#define MAX_SIZE_VISIBLE 100


int Volver();

int N, media, sum, des, i, j, var, num;






int *a;
int N, num, i, j;




int main(int argc, char **argv)
{//inicio menu
	system("cls");
	do
	{
		printf("Cuantos valores desea introducir\n ");
		scanf("%d", &N);
		if(N<1 || N>100)
		{
			printf("Error debe ser menor de 100 y mas que 1, intente de nuevo\n");

				
		system("pause");
		system("cls");//limpieza cada ciclo
	
		}
	}while(N<1 || N>100);
	

    a = malloc (N * sizeof(int));
    

    srand(time(NULL));
    for(i=1;i<N;i++)
    {
        a[i]=rand()/1000;
    }


    if(N<MAX_SIZE_VISIBLE)
    {
        for(i=1;i<=N;i++)
        {
            printf("%d\n", a[i]);
        }
    }
    
	system("pause");
	
	
	
	



	
	
	//----------------MEDIA ARITMETRICA-------------------
	sum = 0;
	
	for(i=1; i<=N; i++)
	{
		sum = sum + i++;		
	}
	 
	media =sum/N;
	
	printf("La media aritmetrica es: %d\n", media);



 
	
	//---------------------VARIANZA---------------
	sum = 0;
	for (i=1; i<=N; i++)
	{
		des = i++ - media;
		des = pow(des,2);
		sum = sum + des;		
	}
	 
	var = sum/(i-1);
	
	printf("La varianza es: %d\n", var);

	



	//---------------------DESVIACION ESTANDAR----------------

	
	for (i=1; i<=N; i++)
	{
		des = sqrt(var);		
	}
	
	printf("La desviacion estandar es: %d\n", des);

	

	//---------------------MODA----------------




	}//fin menu








