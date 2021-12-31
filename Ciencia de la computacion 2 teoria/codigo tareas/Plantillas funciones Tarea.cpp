#include <iostream>
using namespace std;
class Pareja {//se realiza la clase Pareja
public://todos los metodos seran de clase publico incluyendo los datos miembros en este caso
double a, b;// datos miembro de tipos double
// constructor parametrizado
Pareja(const double a,const double b)//
{
this->a = a;//se realiza este paso para evitar ambiguedades debido a que los parametros tienen el mismo nombre que los datos miembros
this->b = b;//se realiza este paso para evitar ambiguedades debido a que los parametros tienen el mismo nombre que los datos miembros
}
};
// Sobrecarga del operador +
Pareja& operator +(const Pareja &p1,const Pareja &p2)//se sobrecarga la operacion suma mandandole como parametros dos objetos 
{
return *(new Pareja(p1.a + p2.a, p1.b + p2.b) );//se retorna un nuevo objeto con la suma de los datos miembros de las clases que se sobrecargaron con la suma
}

int main()
{
Pareja A(50, 75 );//se crea el objeto A de la clase pareja ,instanciando con sus respectivos parametros
Pareja B(150, 175 );//se crea el objeto B de la clase pareja ,instanciando con sus respectivos parametros
Pareja C = A + B;//se crea el objeto C a traves de la suma que se sobrecargo en un metodo de la clase pareja
cout << "A = " << A.a << ',' << A.b << "\n";//se imprime los datos miembros del objeto A instanciado arriba
cout << "B = " << B.a << ',' << B.b << "\n";//se imprime los datos miembros del objeto B instanciado arriba
cout << "C = " << C.a << ',' << C.b << "\n";//se imprime los datos miembros del objeto C pero a traves de la sobrecarga que se especifico en la creacion del objeto C en la parte de la creacion de los objetos
system("PAUSE");
return 0;
}