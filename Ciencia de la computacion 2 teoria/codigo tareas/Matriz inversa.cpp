#include <iostream>
using namespace std;
void matrizInversa(){
    float a00,a01,a10,a11,det,a00b;
    cout<<"-Ingresa el miembro de la matriz de orden 0,0: ";
    cin>>a00;
    cout<<"-Ingresa el miembro de la matriz de orden 0,1: ";
    cin>>a01;
    cout<<"-Ingresa el miembro de la matriz de orden 1,0: ";
    cin>>a10;
    cout<<"-Ingresa el miembro de la matriz de orden 1,1: ";
    cin>>a11;
    det=(a00*a11)-(a10*a01);
    if (det !=0){
        a00b=a00;
        a00=a11;
        a11=a00b;
        a01=-1*a01;
        a10=-1*a10;
        a00=a00/det;
        a01=a01/det;
        a10=a10/det;
        a11=a11/det;
        cout<<a00<<"\t"<<a01<<endl;
        cout<<a10<<"\t"<<a11<<endl;
    }
    else{
        cout<<"La matriz inversa no existe"<<endl;
    }
}
int main(){
    cout<<"---------------------MatrizInversa numero 1--------------------"<<endl;
    matrizInversa();
    cout<<"---------------------MatrizInversa numero 2--------------------"<<endl;
    matrizInversa();    
    system("PAUSE");
    return 0;
}