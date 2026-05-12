Quien me podra ayudar para corregir este proyecto en dev c++
#include
#include
#include
#include
#include

int main void()
{
double raiz;
double cos;

char opcion;
float a,b,c,d,r,n,x1,x2,s1,s;
int n1;
X:
system("cls");

printf("************");
printf("BIENVENIDO");
printf("*************");
printf("\n* a:Suma: *");
printf("\n* b:Resta: *");
printf("\n* c:Multiplicacion: *");
printf("\n* d:Division: *");
printf("\n* e:Raiz Cuadrada: *");
printf("\n* f:Raiz Cubica: *");
printf("\n* g:Coseno: *");
printf("\n* h:Seno: *");
printf("\n* i:Tangente: *");
printf("\n* j:Potencia: *");
printf("\n* k:Logaritmo Decimal: *");
printf("\n* l:Logaritmo: *");
printf("\n* m:Porcentaje: *");
printf("\n* n:Numero Par o Impar: *");
printf("\n* o:Ecuacion De Segundo grado:*");
printf("\n***********************************");
printf("\ningrese opcion:");
scanf("%s",&opcion);
switch(opcion)
{
case 'a':
system("cls");
printf("Cantidad De Numeros A Sumar:");
scanf("%f",&n);
if(n==2)
{
printf("Ingrese Valor 1:");
scanf("%f",&a);
printf("Ingrese Valor 2:");
scanf("%f",&b);
r=a+b;
printf("La Suma Es: %f",r);
}
else if(n==3)
{
printf("Ingrese Valor 2:");
scanf("%f",&a);
printf("Ingrese Valor 3:");
scanf("%f",&b);
printf("Ingrese valor 4:");
scanf("%f",&c);
r=a+b+c;
printf("La Suma Es: %f",r);
}
else if(n==4)
{
printf("Ingrese Valor 1:");
scanf("%f",&a);
printf("Ingrese Valor 2:");
scanf("%f",&b);
printf("Ingrese Valor 3:");
scanf("%f",&c);
printf("Ingrese Valor 4:");
scanf("%f",&d);
r=a+b+c+d;
printf("La Suma Es: %f",r);
}
getch();
system("cls");
printf("Otra operacion =1");
printf("\nSalir= S");
scanf("%f",&a);
if (a==1)
{
goto X;
}
break;

case 'b':
system("cls");
printf("Cantidad De Numeros A Restar:");
scanf("%f",&n);

if(n==2)
{
printf("Ingrese El Valor 1:");
scanf("%f",&a);
printf("Ingrese El Valor 2:");
scanf("%f",&b);
r=a-b;
printf("La Resta es: %f",r);
}
else if(n==3)
{
printf("Ingrese Valor 1:");
scanf("%f",&a);
printf("Ingrese Valor 2:");
scanf("%f",&b);
printf("Ingrese Valor 3:");
scanf("%f",&c);
r=a-b-c;
printf("La Resta Es: %f",r);
}
else if(n==4)
{
printf("Ingrese Valor 1:");
scanf("%f",&a);
printf("Ingrese Valor 2:");
scanf("%f",&b);
printf("Ingrese Valor 3:");
scanf("%f",&c);
printf("Ingrese Valor 4:");
scanf("%f",&d);
r=a-b-c-d;
printf("La Resta Es: %f",r);
}
getch();
system("cls");
printf("Otra operacion=1");
printf("\nSalir=S");
scanf("%f",&a);
if (a==1)
{
goto X;
}
break;

case 'c':
system("cls");
printf("Cantidad De Numeros A Multiplicar");
scanf("%f",&n);

if(n==2)
{
printf("Ingrese Valor 1:");
scanf("%f",&a);
printf("Ingrese Valor 2:");
scanf("%f",&b);
r=a*b;
printf("La Multiplicacion es: %f",r);
}
else if(n==3)
{
printf("Ingrese Valor 1:");
scanf("%f",&a);
printf("Ingrese Valor 2:");
scanf("%f",&b);
printf("Ingrese Valor 3:");
scanf("%f",&c);
r=a*b*c;
printf("La Multiplicacion es: %f",r);
}
else if(n==4)
{
printf("Ingrese Valor 1:");
scanf("%f",&a);
printf("Ingrese Valor 2:");
scanf("%f",&b);
printf("Ingrese Valor 3:");
scanf("%f",&c);
printf("Ingrese Valor 4:");
scanf("%f",&d);
r=a*b*c*d;
printf("La Multiplicacion es: %f",r);
}
getch();
system("cls");
printf("Otra operacion=1");
printf("\nSalir=S");
scanf("%f",&a);
if (a==1)
{
goto X;
}
break;

case 'd':
system("cls");
printf("Ingrese Numeros Para Dividir");
printf("\nIngrese Valor 1:");
scanf("%f",&a);
printf("\nIngrese Valor 2:");
scanf("%f",&b);
printf("la respuesta es:%f",a/b);
getch();
system("cls");
printf("Otra operacion=1");
printf("\nSalir=S");
scanf("%f",&a);
if (a==1)
{
goto X;
}
break;

case 'e':
system("cls");
printf("Ingrese Numero:");
scanf("%f",&a);
r=sqrt(a);
printf("La Raiz Cuadrada Es: %f",r);
getch();
system("cls");
printf("Otra operacion=1");
printf("\nSalir=S");
scanf("%f",&a);
if (a==1)
{
goto X;
}
break;

case 'f':
system("cls");
printf("Ingrese Numero:");
scanf("%f",&a);
r=pow(a,1.0/3);
printf("La Raiz Cubica Es: %f",r);
getch();
system("cls");
printf("Otra operacion=1");
printf("\nSalir=S");
scanf("%f",&a);
if (a==1)
{
goto X;
}
break;

case 'g':
system("cls");
printf("Ingrese El Numero:");
scanf("%f",&a);
r=cos(a*M_PI/180);
printf("El Coseno Es:%f",r);
getch();
system("cls");
printf("Otra operacion=1");
printf("\nSalir=S");
scanf("%f",&a);
if (a==1)
{
goto X;
}
break;

case 'h':
system("cls");
printf("Ingrese El Numero:");
scanf("%f",&a);
r=sin(a*M_PI/180);
printf("El Seno Es:%f",r);
getch();
system("cls");
printf("Otra operacion=1");
printf("\nSalir=S");
scanf("%f",&a);
if (a==1)
{
goto X;
}
break;

case 'i':
system("cls");
printf("Ingrese Numero:");
scanf("%f",&a);
r=tan(a*M_PI/180);
printf("La Tangente Del Numero Es:%f",r);
getch();
system("cls");
printf("Otra operacion=1");
printf("\nSalir=S");
scanf("%f",&a);
if (a==1)
{
goto X;
}
break;

case 'j':
system("cls");
printf("Ingrese Numero:");
scanf("%f",&a);
printf("Ingrese Potencia:");
scanf("%f",&b);
r=pow(a,b);
printf("La Potencia Es:%f",r);
getch();
system("cls");
printf("Otra operacion=1");
printf("\nSalir=S");
scanf("%f",&a);
if (a==1)
{
goto X;
}
break;

case 'k':
system("cls");
printf("Ingrese El Numero:");
scanf("%f",&a);
r=log10(a);
printf("Logaritmo Decimal::%f",r);
getch();
system("cls");
printf("Otra operacion=1");
printf("\nSalir=S");
scanf("%f",&a);
if (a==1)
{
goto X;
}
break;

case 'l':
system("cls");
printf("Ingrese Numero:");
scanf("%f",&a);
r=log(a);
printf("El Logaritmo Es:%f",r);
getch();
system("cls");
printf("Otra operacion=1");
printf("\nSalir=S");
scanf("%f",&a);
if (a==1)
{
goto X;
}
break;

case 'm':
system("cls");
printf("Ingrese Numero:");
scanf("%f",&a);
r=(a/100);
printf("Porcentaje:%f",r);
getch();
system("cls");
printf("Otra operacion=1");
printf("\nSalir=S");
scanf("%f",&a);
if (a==1)
{
goto X;
}
break;

case 'n':
system("cls");
{
system("cls");
printf("Ingrese Numero:");
scanf("%d",&n1);
if ((n1%2)==0)
{
printf(" El Numero Es Par ");
}
else printf("Impar");
}
getch();
system("cls");
printf("Otra operacion=1");
printf("\nSalir=S");
scanf("%f",&a);
if (a==1)
{
goto X;
}
break;

case 'o':
system("cls");
printf("\nIngrese Valor a:");
scanf("%f",&a);
printf("\nIngrese Valor b:");
scanf("%f",&b);
printf("\nIngrese Valor c:");
scanf("%f",&c);
s1=pow(b,2)-(4*a*c);
if (s1
