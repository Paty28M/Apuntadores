#include<iostream>
using namespace std;
int numero=10;
int numero2=12;
int *puntero;
float f=1.35;
char a='b';
int main(int argc, char** argv)
{
	puntero=&numero;
	cout<<"APUNTADORES"<<endl<<endl;
	cout<<"Numero: "<<puntero<<endl;
	cout<<"Memoria char: "<<&a<<endl;
	cout<<"Memoria entero: "<<&numero<<endl;
	cout<<"Memoria float: "<<&f<<endl<<endl;
	cout<<"Creado por: Sandra Patricia Martinez Legorreta"<<endl;
	cout<<"ICO-22"<<endl;
	cout<<"ESTRUCUTURAS DE DATOS"<<endl;
        cout<<"Practica para  git<<"<<endl;
	return 0;
}
