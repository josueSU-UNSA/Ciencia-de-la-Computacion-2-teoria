#include <iostream>
#include <conio.h>
#include<math.h>
using namespace std;
void menu(){
    int opcion;
    while(true){
        cout<<"1.Opcion 1\n2.Opcion 2\n3.Opcion 3"<<endl;
        cin>>opcion;
        if (opcion==1){
            cout<<"1.Opcion 1\n2.Opcion 2\n3.Opcion 3"<<endl;
        }
        if (opcion==2){
            cout<<"1.Opcion 1\n2.Opcion 2\n3.Opcion 3"<<endl;
        }
        if (opcion==3){
            break;
        }
    }
}
float potenciaRec(float base,float  exponente){
    if (exponente==1){
        return base;
    }
    else{
        return base*potenciaRec(base,exponente-1);
    }
}
class Repaso{
    private:
        float base,exponente;
    public: 
        Repaso(float _base,float _exponente){
            base=_base;
            exponente=_exponente;
        }
        float potenciaSimple(){
            return pow(base,exponente);
        }
        float potenciaRecursivo(){
            return potenciaRec(base,exponente);
        }
};
void secciones(){
    for (int i=0;i<40;i++){
        cout<<"-";
    }
    cout<<endl;
}
int main(){
    /*float base,exponente;
    secciones();
    cout<<"\t      Exponente"<<endl;
    cout<<"\tBase             = Potencia"<<endl;
    secciones();
    cout<<"Ingrese la base "<<endl;
    cin>>base;
    cout<<"Ingrese el exponente "<<endl;
    cin>>exponente;
    secciones();
    Repaso objeto(base,exponente);
    cout<<"La potencia "<<endl;
    cout<<"\t    "<<exponente<<endl;
    cout<<"\t"<<base<<"      "<<"=  "<<objeto.potenciaSimple()<<endl;
    secciones();
    cout<<"La potencia "<<endl;
    cout<<"\t    "<<exponente<<endl;
    cout<<"\t"<<base<<"      "<<"=  "<<objeto.potenciaRecursivo()<<endl;
    secciones();*/
    getch();
    return 0;
}
// menu
/*
int opcion;
    while(true){
        cout<<"1.Opcion 1\n2.Opcion 2\n3.Opcion 3"<<endl;
        cin>>opcion;
        if (opcion==1){
            cout<<"1.Opcion 1\n2.Opcion 2\n3.Opcion 3"<<endl;
        }
        if (opcion==2){
            cout<<"1.Opcion 1\n2.Opcion 2\n3.Opcion 3"<<endl;
        }
        if (opcion==3){
            break;
        }
    }

*/