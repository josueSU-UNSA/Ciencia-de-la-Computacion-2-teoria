#include <iostream>
#include<conio.h>
using namespace std;
const size_t longitud=5;
template<class TIPOD>
void mostrarMayor(TIPOD arreglo[longitud]);
int main(){
    float arregloNumeros[longitud]={9,17,18,24,15};
    mostrarMayor(arregloNumeros);
    getch();
    return 0;
}
template<class TIPOD>
void mostrarMayor(TIPOD arreglo[longitud]){
    int indiceMayor=0;
    for (int i=1; i<longitud;i++){
        if (arreglo[i]>arreglo[indiceMayor]){
            indiceMayor=i;
        }
    }
    cout<<"El mayor es "<<arreglo[indiceMayor];
}