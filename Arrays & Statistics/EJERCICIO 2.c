#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_SIZE_VISIBLE 100


int *a;
int N, i, j;
    
    

int main(int argc, char **argv)
{

    
    
    
    
    printf("En un grupo de 50 alumnos sus calificaciones fueron:\n ");
	scanf("%d", &N);



    a = malloc (N * sizeof(int));
    

    srand(time(NULL));
    for(i=0;i<N;i++)
    {
		a = rand() % 6;
		a = rand() % (N+1);
    }


    if(N<MAX_SIZE_VISIBLE)
    {
        for(i=0;i<=N;i++)
        {
            printf(" %d\n", a[i]);
        }
    }


}
