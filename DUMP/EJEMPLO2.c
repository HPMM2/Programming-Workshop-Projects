/*Elaborar un programa que permita:

1 - Crear un archivo binario llamado "productos.dat"
2 - Carga de registros de tipo tproducto.
3 - Listado completo de productos.
4 - Consulta de un producto por su código.
5 - Modificación del precio de un producto.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct {
    char nombre[30];
    char correo[42];
    char num[16];
    char fecha[41];
    char proxfecha[41];
    float desc;
    float precio;
} tcliente;

int main()
{
    int op;
    do {
        printf("Bienvenido\n");
        
        printf("1 - Carga de registros de clientes\n");
        
        printf("2 - Listado completo de clientes\n");
        
        printf("3 - Consulta de cliente por su inicial\n");
        
        printf("4 - Modificacion del precio de un producto. \n");
        
        printf("5 - Finalizar\n\n");
        
        printf("Ingrese su opcion:\n");
        
        scanf("%i",&op);
       
    if(op<1|| op>5)
	{
	printf("Error rango fuera de 1-5, intente de nuevo\n");


				
	system("pause");
	system("cls");//limpieza cada ciclo
	
	}
	}while(op<1|| op>5);
	
	
        
        
        switch (op) 
		{
            case 1:
			cargar();
            break;
            
            case 2:
			listado();
            break;
            
            case 3:
			consulta();
            break;
            
            case 4:
			modificacion();
            break;
            
            case 5:
			modificacion();
            break;
        }
        
    return 0;
}





//---------------------CONTINUAR--------------------------
void continuar()
{
    printf("Presione una tecla para continuar\n\n");
    main();
}





//---------------------CARGAR--------------------------
void cargar()
{//inicio cargar
	
	tcliente cliente;
	
    printf("Ingrese nombre del cliente\n");
    scanf("%s",&cliente.nombre);
    fflush(stdin);
        
    printf("Ingrese el correo del cliente");
    printf("Sino cuenta con uno ingresar NA");
    gets(cliente.correo);
        
    printf("Ingrese el numero de contacto del cliente");
    printf("Sino cuenta con uno ingresar NA");
    gets(cliente.num);
        
    printf("Ingrese la ultima fecha del servicio del cliente");
    printf("Si el cliente es nuevo ingresa NA");
    gets(cliente.fecha);
        
    printf("Ingrese la proxima fecha que el cliente ocupara el servicio");
    gets(cliente.proxfecha);
    
    printf("Ingrese el descuento:");
    scanf("%f",&cliente.desc);
    
    printf("Ingrese el precio neto del servicio:");
    scanf("%f",&cliente.precio);
    
    continuar();
}





//---------------------LISTADO--------------------------    
void listado()
{
    tcliente cliente;

        printf("%s %i %i %i %i %0.2f %0.2f\n", cliente.nombre, cliente.correo, cliente.num, cliente.fecha, cliente.proxfecha, cliente.desc, cliente.precio);

      continuar();
}





//---------------------CONSULTA--------------------------   
void consulta()
{
    printf("Ingrese el nombre del cliente a consultar:");
    int cli;
    scanf("%s", &cli);
    tcliente cliente;
    
    int existe=0;
     
    if (cli==cliente.nombre)
        {
        	printf("%s %i %i %i %i %0.2f %0.2f\n", cliente.nombre, cliente.correo, cliente.num, cliente.fecha, cliente.proxfecha, cliente.desc, cliente.precio);
        	existe=1;
        }
      

}





//---------------------MODIFICACION--------------------------   
void modificacion()
{
    printf("Ingrese el codigo de producto a modificar:");
     int cli;
    scanf("%s", &cli);
    tcliente cliente;
    
    int existe=0;
     
    if (cli==cliente.nombre)
        {
        	printf("%s %i %i %i %i %0.2f %0.2f\n", cliente.nombre, cliente.correo, cliente.num, cliente.fecha, cliente.proxfecha, cliente.desc, cliente.precio);
        	
           printf("Ingrese nuevo precio:");
           scanf("%f",&cliente.precio);
           printf("Se modifico el precio para dicho producto.\n");
           existe=1;
        }
      


        }



