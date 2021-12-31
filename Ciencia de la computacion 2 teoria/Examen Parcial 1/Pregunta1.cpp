#include<iostream>
using namespace std;
class Celular{
    private:
        string nombre;
    public:
        Celular(){
            this->nombre="generico";//por defecto pondre un celular generico para que pueda cargar con cualquier cargador
        }
        Celular(string nombre){
            this->nombre=nombre;//por defecto pondre un celular generico para que pueda cargar con cualquier cargador
        }
        string getNombre(){
            return this->nombre;
        }
        void setNombre(string nombre){
            this->nombre=nombre;
        }
};
class Cargador{
    private:
        string tipo;
    public:
        Cargador(){}
        Cargador(string tipo){
            this->tipo=tipo;
        }
        void setTipo(string tipo){
            this->tipo=tipo;
        }
        string getTipo(){
            return this->tipo;
        }
        void cargar(Celular obj){
            if(obj.getNombre()=="Motorola g8" ){
                if(getTipo()=="Tipo C"){
                    cout<<"Correcto, su celular "<<obj.getNombre()<<" esta siendo Cargando por "<<getTipo()<<endl;
                }
                else{
                    cout<<"Lo siento, su celular "<<obj.getNombre()<<" no puede ser cargado por "<<getTipo()<<endl;
                }        
            }
            else if(obj.getNombre()=="Samsung s5"){
                if(getTipo()=="Tipo estandar"){
                    cout<<"Correcto, su celular "<<obj.getNombre()<<" esta siendo Cargando por "<<getTipo()<<endl;
                }
                else{
                    cout<<"Lo siento, su celular "<<obj.getNombre()<<" no puede ser cargado por "<<getTipo()<<endl;
                }    
            }
            else{
                cout<<"Su celular o Cargador no es compatible con los cargadores "<<endl;
            }
            
           
        }
};
int main(){
    int longitud=4;
    string tipoCel,tipoCargador;
    Celular *arregloCel;
    Cargador *arregloCargadores;
    arregloCel=new Celular[longitud];
    arregloCargadores=new Cargador[longitud];
    for(int i=0;i<longitud;i++){
        cout<<"Indique el modelo del celular ";
        cin>>tipoCel;
        cout<<"Indique el modelo del cargador ";
        cin>>tipoCargador;
        arregloCel[i].setNombre(tipoCel);
        arregloCargadores[i].setTipo(tipoCargador);
    }
    for(int i=0;i<longitud;i++){
        arregloCargadores[i].cargar(arregloCel[i]);
    }
    Celular g8("Motorola g8");
    Celular s5("Samsung s5");
    Cargador cs("Tipo estandar");
    Cargador cc("Tipo C");
    cs.cargar(g8);
    cs.cargar(s5);
    cc.cargar(g8);
    delete []arregloCel;
    delete []arregloCargadores;
    system("pause");
    return 0;
}
