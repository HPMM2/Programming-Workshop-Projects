/*3
1.- biblioteca o librerias
2.- funcion principal
3.- cuerpo de codigo
Realice un codigo en c, que al recibir como datos la base y la altura de un triangulo, calcule su superficie*/


//librerias
#include <stdio.h> //nunca olvidar
#include <stdlib.h> //para funcion de al final/secundaria
//funcion principal
main()
{//cuerpo de la funcion o del codigo
 float base, altura, area=0;
 printf("Valor para la base: ");
 scanf("%f", &base);
 printf("Valor para la altura ");
 scanf("%f", &altura);
 area=(base*altura)/2;
 printf("El area del tri%cngulo es: %.2f",160,area); // %c es para indicar un caracter especial como acentos, sacar numero (en este caso 160) de la pagina de ANSII de la letra o caracter especial deseado
 system("PAUSE");
}


