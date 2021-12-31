#include <iostream>
#include<array>
#include<ctime>
using namespace std;
//int numerosAleatorios();
const int filas=4;
const int columnas=5;
void AsignarElementos(array<array<int,columnas>,filas>& arreglo);
void ImprimirArregloBidimensional(array<array<int,columnas>,filas>& arreglo);
void Sumar(array<array<int,columnas>,filas>& arreglo);
int main(){
    srand(time(0));
    array<array<int,columnas>,filas> listaRandom={};
    AsignarElementos(listaRandom);
    ImprimirArregloBidimensional(listaRandom);
    system("PAUSE");
    return 0;
}
void AsignarElementos(array<array<int,columnas>,filas>& arreglo){
    for(int i=0;i<filas;i++){//elemento[i][j]
        for(int j=0;j<columnas;j++){
            arreglo[i][j]=rand()%20+1;
        }
    }
}
void Sumar(array<array<int,columnas>,filas>& arreglo){
    int count=0;
    for(int i=0;i<filas;i++){//elemento[i][j]
        for(int j=0;j<columnas;j++){
            count+=arreglo[i][j];
        }
    }
}
void ImprimirArregloBidimensional(array<array<int,columnas>,filas>& arreglo){
    for(int i=0;i<filas;i++){//elemento[i][j]
        for(int j=0;j<columnas;j++){
            cout<<arreglo[i][j]<<"\t";
        }
        cout<<endl;
    }
}
/*void AsignarElementos(array<array<int,columnas>,filas>&arreglo){
    for(auto& columnas:arreglo){
        for(int elementos:columnas){
            elementos=rand()%20+1;
        }
    }
}*/

/*int numerosAleatorios(){
    return rand()%20+1;
}*/