#include<iostream>
#include<conio.h>
using namespace std;
void rellenar(int *arreglo,int cantidad){
    for(int i=0;i<cantidad;i++){
        cout<<"Ingrese el valor: ";
        cin>>arreglo[i];
        cout<<endl;
    }
}
void print(int *arreglo,int cantidad){
    for(int i=0;i<cantidad;i++){
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;
}
/*
void rellenar(int arreglo[],int cantidad){
    for(int i=0;i<cantidad;i++){
        cout<<"Ingrese el valor: ";
        cin>>arreglo[i];
        cout<<endl;
    }
}
*/
void quicksort(int *A,int primero,int ultimo){
    int central,i,j,pivote;
        central=(primero+ultimo)/2;//posici�n central del array
        
        pivote=A[central];
        i=primero;
        j=ultimo;
        
        do{
            //separar en dos partes el array
            while(A[i]<pivote) i++; //menores del pivote
            while(A[j]>pivote) j--; //mayores del pivote
            //intercambio de valores
            if(i<=j){
                int aux;
                aux=A[i];
                A[i]=A[j];
                A[j]=aux;
                i++;
                j--;
            }
            
        }while(i<=j);
        
        if(primero<j)
            quicksort(A,primero,j);
        if(i<ultimo)
            quicksort(A,i,ultimo);    
}
void InvertirLista(int *arreglo,int cantidad){
    int aux;
    for(int i=0;i<cantidad/2;i++){
        aux=arreglo[i];
        arreglo[i]=arreglo[cantidad-1-i];
        arreglo[cantidad-1-i]=aux;
    }
}
/*
void quicksort(int A[],int primero,int ultimo){
    int central,i,j,pivote;
        central=(primero+ultimo)/2;//posici�n central del array
        
        pivote=A[central];
        i=primero;
        j=ultimo;
        
        do{
            //separar en dos partes el array
            while(A[i]<pivote) i++; //menores del pivote
            while(A[j]>pivote) j--; //mayores del pivote
            //intercambio de valores
            if(i<=j){
                int aux;
                aux=A[i];
                A[i]=A[j];
                A[j]=aux;
                i++;
                j--;
            }
            
        }while(i<=j);
        
        if(primero<j)
            quicksort(A,primero,j);
        if(i<ultimo)
            quicksort(A,i,ultimo);    
}
*/
void pasoPorValor(int valor){
    valor+=13;
}
void pasoPorReferencia(int &valor){
    valor+=13;  
}

int main(){
    /*int *arregloDin, cantidad;
    cout<<"Indique el largo de tu lista ";
    cin>>cantidad;
    arregloDin=new int[cantidad];
    rellenar(arregloDin,cantidad);
    print(arregloDin,cantidad);
    quicksort(arregloDin,0,cantidad-1);
    InvertirLista(arregloDin,cantidad);
    print(arregloDin,cantidad);
    delete []arregloDin;    */
    int num=15;
    cout<<num<<endl;
    pasoPorValor(num);
    cout<<num<<endl;
    pasoPorReferencia(num);
    cout<<num<<endl;
    getch();
    return 0;
}