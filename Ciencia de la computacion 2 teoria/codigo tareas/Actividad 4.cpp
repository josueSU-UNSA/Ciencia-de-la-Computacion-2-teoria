#include <iostream>
using namespace std;
/*void funcion1(int number1,int number2)
{
    for (int i=number1;i<=number2;i=i+1)
    {
        if (i%2==0){
            cout<<i<<"\n";    
        }
    }
}
void funcion2(int number1,int number2)
{
    for (int i=number1;i<=number2;i=i+1)
    {
        cout<<i<<"\n";
    }
}*/
int busquedaLineal(int a[],int elemento,int z){
    //int z=sizeof (a)/sizeof (a[0]);
    for (int i=0;i<z;i++){
        if (a[i]==elemento){
            return i;
        }
    }
}
int main()
{
    //int opcion,numero1,numero2; 
    /*while(true)
    {
        cout<<"------------------------------------------------------------------\n";
        cout<<"\tOPCIONES\n1.Imprimir intervalo\n"<<"2.Salir\n\t-Ingrese opcion: ";
        cin>>opcion;
        cout<<"------------------------------------------------------------------\n";
        if(opcion==1)
        {
            cout<<"Introduzca el primer numero: ";
            cin>>numero1;
            cout<<"Introduzca el segundo numero: ";
            cin>>numero2;
            cout<<"------------------------------------------------------------------\n";
            if (numero1>numero2)
            {
                funcion1(numero2,numero1);
            }
            else if (numero1<numero2)
            {
                funcion2(numero1,numero2);
            }
            else
            {
                cout<<"Los numeros ingresados son iguales \n";
            }
        }
        else if (opcion==2)
        {
            break;
        }
        else
        {
            cout<<"Error en el ingreso de numeros\n";
        }
        
    }*/
    int array[4]={2,3,4,5};
    cout<<busquedaLineal(array,4,4)<<endl;
    system("PAUSE");
    return 0;
} 
