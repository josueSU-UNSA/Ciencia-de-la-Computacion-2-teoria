#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a=15;
    int* aPtr=&a;
    int aux;
    cout<<"Imprimiendo la direccion de memoria de la variable a directamente con el operador de direccion & : ";
    cout<<&a<<endl;
    cout<<"Imprimiendo la direccion de memoria de la variable a directamente con ayuda del puntero aPtr: ";
    cout<<aPtr<<endl;
    cout<<"Imprimiendo el valor contenido en la variable: ";
    cout<<a<<endl;
    cout<<"Imprimiendo el valor que almacena la direccion a la que apunta el puntero: ";
    cout<<*aPtr<<endl;
    cout<<"Cambiaremos el valor de la variable a traves del ingreso por consola directamente al valor : ";
    cout<<"Introduce el valor: ";
    cin>>aux;
    a=aux;
    cout<<a<<endl;
    cout<<"Cambiaremos el valor de la variable a traves del operador indireccion *: ";
    *aPtr=aux;
    cout<<a;
    getch();
    return 0;
}
