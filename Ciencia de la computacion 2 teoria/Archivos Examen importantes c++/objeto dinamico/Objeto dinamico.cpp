#include <iostream>
#include <conio.h>
using namespace std;
class Vehiculo{
    private:
        string color;
    public:
        Vehiculo(string color){
            this->color=color;
        }
        string getColor(){
            return this->color;
        }
        void claxon(){
            cout<<"PIPIPIPIPIPIPI"<<endl;
        }
};
int main(){
    //Creacion del objeto dinamico
    Vehiculo *dinamicObject=new Vehiculo("verde");
    //Como llama a sus metodos un objeto dinamico
    cout<<dinamicObject->getColor()<<endl;
    dinamicObject->claxon();
    delete dinamicObject;
    getch();
    return 0;
}
