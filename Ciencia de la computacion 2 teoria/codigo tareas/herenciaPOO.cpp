#include <iostream>
#include<iomanip>
#include<array>
#include<math.h>
#include <ctime>
#include<algorithm>
using namespace std;
class Persona{
    private:
        string _nombreCompleto;
        int _edad;
    public:
        Persona(string nombreCompleto,int edad){
            _nombreCompleto=nombreCompleto;
            _edad=edad;
        }
        void presentacionPadre(){
            cout<<"Clase padre Persona"<<endl;
        }
};
class Empleado:public Persona{
    private:
        int _codigo;
        float _sueldo;
    public:
        Empleado(string nombreCompleto,int edad,int codigo,float sueldo):Persona(nombreCompleto,edad){
            _codigo=codigo;
            _sueldo=sueldo;
        }
        void presentacionEmpleado(){
            cout<<"Clase hija Empleado  de Persona"<<endl;
        }
};

class Estudiante:public Persona{
    private:
        int _grado;
        float _nota ;
    public:
        Estudiante(string nombreCompleto,int edad,int grado,float nota):Persona(nombreCompleto,edad){
            _grado=grado;
            _nota=nota;
        }
        void presentacionEstudiante(){
            cout<<"Clase hija Estudiante de Persona"<<endl;
        }
};
class Universitario:public Estudiante{
    private:
        string _escuela;
    public:
        Universitario(string nombreCompleto,int edad,int grado,float nota,string escuela):Estudiante(nombreCompleto,edad,grado,nota){
            _escuela=escuela;
        }
        void presentacionUniversitario(){
            cout<<"Clase hija Universitario de la clase hija Estudiante"<<endl;
        }
};
int main(){
    Persona instanciaPersona("Javier", 35);
    instanciaPersona.presentacionPadre();
    Empleado instanciaEmpleado("Pedro",29,7856,890);
    instanciaEmpleado.presentacionEmpleado();
    Estudiante instanciaEstudiante("Jorge",19,4,15);
    instanciaEstudiante.presentacionEstudiante();
    Universitario instanciaUniversitario("Sebastian",17,1,15,"Ciencia de la computacion");
    instanciaUniversitario.presentacionUniversitario();
    system("PAUSE");
    return 0;
}




//





