#include<iostream>
//#define lista
#include<conio.h>
#include<ctime>
using namespace std;
int longitud;
int* lista;

int random(){
    return rand()%20+1;
}
void generarAleatorio(){
    //la inicializacion de la lista dinamica debe ser dentro de una funcion o en la declaracion asi 
    /*
    int longitud;
    int *lista=new int [longitud];
    */
    for(int i=0;i<longitud;i++){
        lista[i]=random();//genera numero del 1 al 20
    }
}
void imprimirLista(){
    for(int i=0;i<longitud;i++)
        cout<<lista[i]<<" ";
    cout<<endl;
}
int main(){
    cout<<"Ingrese la longitud ";
    cin>>longitud;
    lista=new int[longitud];
    srand(time(0));//actualiza los aleatorios
    generarAleatorio();
    imprimirLista();
    delete[] lista;
    getch();
    return 0;
}