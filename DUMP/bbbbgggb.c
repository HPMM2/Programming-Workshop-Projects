#include <stdio.h>


FILE *f1, *f2;

/* Apertura del fichero original, para lectura en binario*/
f1 = fopen ("fichero.dat", "rb");
if (f1==NULL)
{
   perror("No se puede abrir fichero.dat");
   return -1;
}

/* Apertura del fichero de destino, para escritura en binario*/
f2 = fopen ("fichero2.dat", "wb");
if (f2==NULL)
{
   perror("No se puede abrir fichero2.dat");
   return -1;
}
