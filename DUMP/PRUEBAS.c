#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
struct inventario
{
  char titulo[25];
  char autor[30];
  int num;
  int pedido;
  float precio_venta;
};

typedef struct inventario Inventa;
main()
{
 Inventa  libro[100];
 int total=0;
 char resp,b[21];
 do
 {
   printf("Total de libros %d\n", (total+1));
   printf("Cual es el titulo?: ");
   gets(libro[total].titulo);
   printf("quien es el autor?: ");
   gets(libro[total].autor);
   printf("Cuantos libros existen?: ");
   scanf("%d", &libro[total].num);
   printf("Cuantos ejemplares estan pedidos?: ");
   scanf("%d%*c",&libro[total].pedido);
printf("cual es el precio de venta?: ");
   gets(b);
   libro[total].precio_venta=atof(b); //conversion a real 
   printf("\n Hay mas libros? [S/N]: ");
   scanf("%c%*c",&resp);
   resp = toupper(resp); //convierte a mayusculas
   if(resp=='S')
   {
     total++;
     continue;
   }
 }while(resp=='S');
 printf("\n\n");
 system("PAUSE");
} 

