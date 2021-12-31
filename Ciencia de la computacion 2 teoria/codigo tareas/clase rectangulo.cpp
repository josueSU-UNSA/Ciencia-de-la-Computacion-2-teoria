#include <iostream>
using namespace std;
class Rectangulo
{
public:
//private:
    int ancho,largo;
//public:
//set y get
    Rectangulo(int,int);
    int perimetro();
    int area();    
};
    Rectangulo::Rectangulo(int _ancho,int _largo){
        ancho=_ancho;
        largo=_largo;
    }
    int Rectangulo::perimetro(){
        return ((2*ancho)+(2*largo));
    }
    int Rectangulo::area(){
        return (ancho*largo);
    }
int main(){
    int width,height;
    cout<<"Ingrese el alto del rectangulo: ";
    cin>>height;
    cout<<"Ingrese el ancho del rectangulo: ";
    cin>>width;
    Rectangulo Instancia(width,height);
    cout<<"El perimetro del rectangulo ingresado es: "<<Instancia.perimetro()<<endl;
    cout<<"El area del rectangulo ingresado es: "<<Instancia.area()<<endl;
    cout<<Instancia.ancho;
    system("PAUSE");
    return 0;
}

