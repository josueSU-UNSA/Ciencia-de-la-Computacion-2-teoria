#include <iostream>
using namespace std;
int main(){
    int numero;
    int mayor;
    cout<<".-Ingrese un numero: ";
    cin>>numero;
    mayor=numero;
    while(numero!=-1){
       cout<<".-Ingrese un numero: ";
        cin>>numero;
        if (mayor<numero){
            mayor=numero;
        }
    }
    cout<<"------------------------------------------------------------------------------------------------"<<endl;
    cout<<"El mayor de los numeros ingresados es "<<mayor<<endl;
    system("PAUSE");

    return 0;   
} 