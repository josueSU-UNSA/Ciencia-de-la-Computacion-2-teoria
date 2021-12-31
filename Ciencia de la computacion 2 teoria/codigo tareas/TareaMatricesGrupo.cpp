#include <iostream>
using namespace std;
int main()
{   
    int j,k,l,m;
    int array[2][2]={{0,0},{0,0}};
    int array2[2][2]={{0,0},{0,0}};
    cout<<"A continuacion realizaremos un producto de funciones de orden 2 X 2 en ambas matrices"<<endl;
    cout<<"\tIngrese los elementos de la primera matriz: "<<endl;
    cout<<"-------------------------------------------------------------------------------------"<<endl;
    cout<<"1. Ingrese el elemento de orden 1,1 "<<endl;
    cin>>array[0][0];
    cout<<"2. Ingrese el elemento de orden 1,2 "<<endl;
    cin>>array[0][1];
    cout<<"3. Ingrese el elemento de orden 2,1 "<<endl;
    cin>>array[1][0];
    cout<<"4. Ingrese el elemento de orden 2,2 "<<endl;
    cin>>array[1][1];
    cout<<"-------------------------------------------------------------------------------------"<<endl;
    cout<<"\tIngrese los elementos de la segunda matriz: "<<endl;
    cout<<"-------------------------------------------------------------------------------------"<<endl;
    cout<<"1. Ingrese el elemento de orden 1,1 "<<endl;
    cin>>array2[0][0];
    cout<<"2. Ingrese el elemento de orden 1,2 "<<endl;
    cin>>array2[0][1];
    cout<<"3. Ingrese el elemento de orden 2,1 "<<endl;
    cin>>array2[1][0];
    cout<<"4. Ingrese el elemento de orden 2,2 "<<endl;
    cin>>array2[1][1];
    j=(array[0][0]*array2[0][0])+(array[0][1]*array2[1][0]);
    k=(array[0][0]*array2[0][1])+(array[0][1]*array2[1][1]);
    l=(array[1][0]*array2[0][0])+(array[1][1]*array2[1][0]);
    m=(array[1][0]*array2[0][1])+(array[1][1]*array2[1][1]);
    cout<<"-------------------------------------------------------------------------------------"<<endl;
    cout<<"Los elementos del producto de las anteriores matrices son"<<endl;
    cout<<"\t"<<j<<"\t"<<k<<endl;
    cout<<"\t"<<l<<"\t"<<m<<endl;
    system("PAUSE");
    return 0;    
}