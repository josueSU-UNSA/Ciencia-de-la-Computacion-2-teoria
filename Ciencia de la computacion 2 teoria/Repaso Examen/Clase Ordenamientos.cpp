#include<iostream>
#include<conio.h>
#include<time.h>

using namespace std;
class sort{
    private:
        int *lista,longitud;
    public:
        sort(){
            cout<<"Ingrese la longitud ";
            cin>>longitud;
            lista=new int [longitud];
            for(int i=0;i<longitud;i++){
                cout<<"Ingrese el elemento ";
                cin>>lista[i];
            }         
        }
        void imprimirLista(){
            for(int i=0;i<longitud;i++)
                cout<<lista[i]<<" ";
            cout<<endl;
        }
        void insercion(){
            int valorActual,posicion;
            for(int i=1;i<longitud;i++){//vamos desde el el termino numero dos esto para poder comparar el termino anterior

                valorActual=lista[i];//definimos una variable la cual sera el elemento  en si que se empieza a comparar
                posicion=i;//esta variable posicion es necesaria para buscar el elemento anterior a la variable valor actual
                while (lista[posicion-1]>valorActual && posicion>0 ){//entrara al bucle a hacer el procedimiento de intercambio siempre y cuando el valor anterior al valor en este caso que empieza en el segunda definindo en el bucle anterior y si la posicion es mayor que cero , ya que de nos ser mayor que cero haria habria un indice no valido para el valor o uno negativa que haria que la funcion compare el primero con el ultimo termino
                    lista[posicion]=lista[posicion-1];//de cumplirse estos requisitos se hara un ordenamiento in place en el cual la posicion que se asigna que en este caso empieza en el segundo se iguale al primero ya que este es mayor
                    posicion-=1;//mientras que la posicion retrocedera en uno para seguir comparando el anterior valor para que si este es menor que el anterior siga bajando
                }
                lista[posicion]=valorActual;//esta nueva posicion sera la nueva variable valor actual que se comparara en el bucle while para ver si es menor que la posicion a la izquierda de este
                }
        }
        void quicksort(int primero, int ultimo){
            int central,i,j,pivote;
            central=(primero+ultimo)/2;//posici�n central del array
            
            pivote=lista[central];
            i=primero;
            j=ultimo;
            
            do{
                //separar en dos partes el array
                while(lista[i]<pivote) i++; //menores del pivote
                while(lista[j]>pivote) j--; //mayores del pivote
                //intercambio de valores
                if(i<=j){
                    int aux;
                    aux=lista[i];
                    lista[i]=lista[j];
                    lista[j]=aux;
                    i++;
                    j--;
                }
                
            }
            while(i<=j);
            
            if(primero<j)
                quicksort(primero,j);
            if(i<ultimo)
                quicksort(i,ultimo);
        }
        int getLongitud(){
            return this->longitud;
        }
};
int main(){
    sort arreglo;
    arreglo.imprimirLista();
    arreglo.quicksort(0,arreglo.getLongitud()-1);
    arreglo.imprimirLista();
    getch();
    return 0;
}