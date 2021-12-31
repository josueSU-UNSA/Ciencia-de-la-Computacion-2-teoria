#include <iostream>
#include<iomanip>
#include<array>
#include<math.h>
#include <ctime>
#include<algorithm>
//Ejercicio 1
using namespace std;
void Notas(array<int,20>& lista,array<int,20>& lista2);
void calidad(array<int,20>& lista,array<int,10>& lista2);
void frecAsteriscos(const array<int,20>lista,const array<int,10> lista2);
void frecuencias(const array<int,20>lista,const array<int,10> lista2);
void minYmax(array<int,20>& lista);
void Promedio(array<int,20>& lista);
void asignarAleatorios(array<array<int,5>,4>& lista);
void sumaAleatorios(const array<array<int,5>,4>lista);
int lanzarDado();
int numdom();
void FrecuenciaDado(array<int,6>& lista);
int main(){
    d(time(0));
    array<int,20>listaCalificacion={};
    array<int,10>listaFrecuencia={};
    array<int,20>listaNotas={};
    array<int,20>listaFrecuenciaNotas={};
    array<array<int,5>,4>listaBidimensional={};
    array<int,6>listaFrecuenciaDado={};
    FrecuenciaDado(listaFrecuenciaDado);
    //Notas(listaNotas,listaFrecuenciaNotas);
    //minYmax(listaNotas);
    //Promedio(listaNotas);
    //asignarAleatorios(listaBidimensional);
    //sumaAleatorios(listaBidimensional);
    //calidad(listaCalificacion,listaFrecuencia);
    //frecuencias(listaCalificacion,listaFrecuencia);
    //EJERCICIO 3 frecAsteriscos(listaCalificacion,listaFrecuencia);
    system("PAUSE");
    return 0;
}
void calidad(array<int,20>& lista,array<int,10>& lista2){
    for(int i=0;i<20;i++){
        cout<<"Ingrese la calificacion: ";
        cin>>lista[i];
        lista2[lista[i]-1]+=1;
    }
}
void Notas(array<int,20>& lista,array<int,20>& lista2){
    for(int i=0;i<20;i++){
        cout<<"Ingrese la Notas: ";
        cin>>lista[i];
        lista2[lista[i]-1]+=1;
    }
}
void minYmax(array<int,20>& lista){
    sort(lista.begin(),lista.end());
    cout<<"El mayor es "<<lista[19]<<endl;
    cout<<"El minimo es "<<lista[0]<<endl;
}

void frecAsteriscos(const array<int,20>lista,const array<int,10> lista2){
    cout<<"Calificacion\tFrecuencia"<<endl;
    for (int i=0;i<10;i++){
        cout<<i+1<<"\t\t";
        for (int j=0;j<lista2[i];j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void frecuencias(const array<int,20>lista,const array<int,10> lista2){
    cout<<"Calificacion\tFrecuencia"<<endl;
    for (int i=0;i<10;i++){
        cout<<i+1<<"\t\t"<<lista2[i]<<endl;
        }
}
void Promedio(array<int,20>& lista){
    int count=0;
    for (int elemento: lista){
        count+=elemento;
    }
    cout<<"El promedio es "<<count/20<<endl;
}
int numdom(){
    return rand()%20+1;
}
void asignarAleatorios(array<array<int,5>,4>& lista){
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            lista[i][j]=numdom();
        }
    }
    for(int k=0;k<4;k++){
        for(int l=0;l<5;l++){
            cout<<lista[k][l]<<"  ";
        }
        cout<<endl;
    }
}
void sumaAleatorios(const array<array<int,5>,4>lista){
    int count=0;
    for(int k=0;k<4;k++){
        for(int l=0;l<5;l++){
            count+=lista[k][l];
        }
    }
    cout<<"La suma es "<<count<<endl;
}
int lanzarDado(){
    return rand()%6+1;
}
void FrecuenciaDado(array<int,6>& lista){
    for(int i=0;i<200;i++){
        lista[lanzarDado()-1]+=1;
    }
    cout<<"Cara\tFrecuencia"<<endl;
    for(int i=0;i<6;i++){
        cout<<i+1<<"\t\t"<<lista[i]<<endl;
    }
    
}