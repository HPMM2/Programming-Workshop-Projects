#include<stdio.h>
#include<conio.h>
#include<string.h>

void cargar(char nombres[5][41])
{
    int f;
    for(f=0;f<5;f++)
    {
        printf("Ingrese el nombre de persona:");
        gets(nombres[f]);
    }
}

void imprimir(char nombres[5][41])
{
    int f;
    printf("Listado completo de nombres\n");
    for(f=0;f<5;f++)
    {
        printf("%s\n",nombres[f]);
    }
}

void consulta(char nombres[5][41])
{
    int f;
    char nom[41];
    int existe=0;
    printf("Ingrese un nombre para buscarlo:");
    gets(nom);
    for(f=0;f<5;f++)
    {
        if (strcmp(nom,nombres[f])==0)
        {
            existe=1;
        }
    }
    if (existe==1)
    {
        printf("El nombre se encuentra almacenado en la matriz.");
    }
    else
    {
        printf("El nombre no se encuentra almacenado en la matriz.");
    }
}


int main()
{
    char nombres[5][41];
    cargar(nombres);
    imprimir(nombres);
    consulta(nombres);
    getch();
    return 0;
}

