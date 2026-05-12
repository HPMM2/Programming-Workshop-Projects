#include <iostream>
#include<fstream>
#include<windows.h>

using namespace std;
struct miEstudiante
{
    int id;
    char nombre[20];
    char apellido[20];
    int edad;
    double promedio;
};

int main()
{
    miEstudiante persona;
    ofstream fichero;
    fichero.open("fichero.csv",ios::app);

    for (int i=0;i<2;i++)
    {
        cout<<"Ingrese id, nombre, apellido,edad y promedio por favor: \n";
        cin>>persona.id;
        cin.ignore();
        cin.getline(persona.nombre,20);
        cin.getline(persona.apellido,20);
        cin>>persona.edad;
        cin>>persona.promedio;

        fichero<<persona.id<<";"<<persona.nombre<<";"<<persona.apellido<<";"<<persona.edad<<";"<<persona.promedio<<"\n";
        system("cls");
    }
        fichero.close();


    ifstream lectura;
    lectura.open("fichero.csv",ios::in);
    while (lectura.good())
    {
        lectura>>persona.id>>persona.nombre>>persona.apellido>>persona.edad>>persona.promedio;
        cout<<"ID-"<<persona.id<<" ";
        cout<<"Nombre-"<<persona.nombre<<" ";
        cout<<"Apellido-"<<persona.apellido<<" ";
        cout<<"Edad-"<<persona.edad<<" ";
        cout<<"Promedio-"<<persona.promedio<<endl;
    }
    lectura.close();
    return 0;
}
