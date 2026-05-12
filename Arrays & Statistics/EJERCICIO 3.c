#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_SIZE_VISIBLE 100


int *a;
int N, num, i, j;
    
    

int main(int argc, char **argv)
{

    
    
    
    printf("Cuantos numeros desea buscar?\n ");
    scanf("%d", &N);
    
    


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
            printf("%d: %d\n", i, a[i]);
        }
    }


//--------------------BUSCAR--------------------------

    printf("Ingrese el numero que desea buscar ");
    scanf("%d", &num);
    j = 0;



	    for(i=1;i<=N;i++)
    	{
        	if( a[i]==num )
        	{
            	printf("%d se encuentra en la posicion %d\n", num, i);
            	j = 1;
            	return 0;
        	}
    	}

    if(!j)
    {
		
		printf("Valor no encontrado\n");
    }
 
 
    free(a);
    
    
    
    return 0;
}
