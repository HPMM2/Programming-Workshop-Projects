#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_SIZE_VISIBLE 100


int *a;
int N, num, i, j;
    
    

int main(int argc, char **argv)
{

    
    
    
    printf("Cuantos numeros tendra el arreglo 1?\n ");
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

main2();
}

int *ac;
int Nc, numc, ic, jc;
    
    

int main2(int argc, char **argv)
{

    
    
    
    printf("Cuantos numeros tendra el arreglo 2?\n ");
    scanf("%d", &Nc);
    
    


    ac = malloc (Nc * sizeof(int));
    

    srand(time(NULL));
    for(ic=1;ic<Nc;ic++)
    {
        ac[ic]=rand()/1000;
    }


    if(Nc<MAX_SIZE_VISIBLE)
    {
        for(ic=1;ic<=Nc;ic++)
        {
            printf("%d: %d\n", ic, ac[ic]);
        }
    }


int id, Nd, *ad;
    if(Nc<MAX_SIZE_VISIBLE)
    {
        for(id=1;id<=Nd;id++)
        {
            ic*i;
			printf("%d\n", ad[id]);
        }
    }




}





