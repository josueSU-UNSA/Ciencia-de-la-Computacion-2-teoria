#include <iostream>
using namespace std;

void Counting_Sort(int array[],int tamanio){
    int salida[10];
    int contador[10];
    int maximo=array[0];

    //Encuentra el elemento más grande del arreglo
    for(int i=0;i<tamanio;i++){
        if(array[i]>maximo)
            maximo=array[i];
    }

    //Llenamos de puros ceros al array contador
    for(int i=0;i<=maximo;++i){
        contador[i]=0;
    }

    //Almacena el contador de cada elemento
    for(int i=0;i<tamanio;i++) {
        contador[array[i]]++;
    }

    //Almacena el contador acumulativo de cada arreglo
    for(int i=1;i<=maximo;i++) {
        contador[i]+=contador[i-1];
    }

    /*Encuentra el índice de cada elemento del arreglo original en el
	arreglo de conteo, y coloca los elementos en el arreglo de salida */
    for(int i=tamanio-1;i>= 0;i--){
        salida[contador[array[i]]-1]=array[i];
        contador[array[i]]--;
    }

    for(int i=0;i<tamanio;i++) {
        array[i]=salida[i];
    }
}

void mostrar(int array[],int tamanio){
    for(int i=0;i<tamanio;i++){
    	cout<<array[i]<<"   ";
	}
	cout<<endl;
}

int main(){
  int array[] = {6, 4, 2, 2, 7, 8, 0, 5, 3, 8};
  int n=sizeof(array)/sizeof(array[0]);
  cout<<"ARREGLO DE ENTRADA\n";
  mostrar(array,n);
  Counting_Sort(array,n);
  cout<<"\nARREGLO DE SALIDA\n";
  mostrar(array,n);
}
