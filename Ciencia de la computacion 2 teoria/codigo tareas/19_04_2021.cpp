#include<iostream>
#include<conio.h>
using namespace std;
int potencia(int base,int exponente){
    if (exponente==1){
        return base;
    }
    else{
        return base*potencia(base,exponente-=1);
    }
}
int potenciaRec(int base,int exponente){
    if (exponente<=0){
        return 1;
    }
    else{
        return base*potenciaRec(base,--exponente);
    }
}

int main(){
    //sobre carga de funciones
    /*void imprimir(int n){
        cout<<n;
    }
    void imprimir(string n1){
        cout<<n1;
    }*/
    /*int x=5;
    int c;*/
    //c=++x;
    //c=x++;
    /*int num=10; 
    cout<<num<<endl;
    cout<<num<<endl;
    cout<<num<<endl;
    cout<<c<<endl;
    cout<<x<<endl;*/
    cout<<potencia(4,4)<<endl;
    cout<<potenciaRec(3,5);
    
    getch();
    return 0;
    
}