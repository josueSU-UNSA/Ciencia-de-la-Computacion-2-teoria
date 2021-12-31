#include<iostream>
#include<conio.h>
#include"Figura.h"
#include"Circulo.h"
#include"Cuadrado.h"
using namespace std;
int main(){
    Figura instancia1(3);
    Cuadrado instancia2(3);
    cout<<instancia2.Area()<<endl;
    cout<<instancia2.Perimetro()<<endl;
    Circulo instancia3(3);
    cout<<instancia3.Area()<<endl;
    cout<<instancia3.Perimetro()<<endl;
    getch();
    return 0;
}