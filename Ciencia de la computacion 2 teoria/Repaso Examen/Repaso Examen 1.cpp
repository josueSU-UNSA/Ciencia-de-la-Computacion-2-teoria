#include <iostream>
#include<iomanip>
#include<array>
#include<math.h>
#include <ctime>
#include<algorithm>
using namespace std;
//array<int,12> arreglo={10,21,31,41,51,61,71,81,91,101,111,121};
//int arreglo[12]={10,21,31,41,51,61,71,81,91,101,111,121};
//int arre[12]={1,2,3,4,5,6,7,8,9,10,11,12};
int* Dinamic=new int[12];
//numeros aleatorios o randoms
int numdom(){
    return rand()%20+1;
}
void asignarAleatorios(int *lista,int longitud){
    for(int i=0;i<longitud;i++){
        lista[i]=numdom();    
    }
}
void copiarArreglo(int* arregloDinamic,int estatic[12],int tamanio){
    for(int i=0;i<tamanio;i++){
        arregloDinamic[i]=estatic[i];
    }
}
void imprimir(int arr[12],int tamanio){
    for(int i=0;i<tamanio;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int main(){
    //este algoritmo se usa para que se pueda actualizar y generar nuevos numeros
    srand(time(0));
    //int ArregloAux[5]={50,40,30,20,10};
    /*Persona instanciaPersona("Javier", 35);
    instanciaPersona.presentacionPadre();
    Empleado instanciaEmpleado("Pedro",29,7856,890);
    instanciaEmpleado.presentacionEmpleado();
    Estudiante instanciaEstudiante("Jorge",19,4,15);
    instanciaEstudiante.presentacionEstudiante();
    Universitario instanciaUniversitario("Sebastian",17,1,15,"Ciencia de la computacion");
    instanciaUniversitario.presentacionUniversitario();*/
    //copiarArreglo(Dinamic,arreglo,12);
    //imprimir(arreglo,12);
    //cout<<sizeof (arreglo)/sizeof (arreglo[0]);
    //cout<<endl;
    //cout<<arreglo[4];

    asignarAleatorios(Dinamic,12);
    imprimir(Dinamic,12);
    delete[]Dinamic;

    //Dinamic=new int [5];
    //arregloAux(Dinamic,ArregloAux,5);
    //copiarArreglo(Dinamic,ArregloAux,5);
    //imprimir(Dinamic,5);
    //cout<<endl;
    //cout<<sizeof Dinamic/sizeof Dinamic[0];
    //cout<<sizeof ArregloAux/sizeof ArregloAux[0];
    //cout<<endl;
    //delete[]Dinamic;
    system("PAUSE");
    return 0;
}




//





