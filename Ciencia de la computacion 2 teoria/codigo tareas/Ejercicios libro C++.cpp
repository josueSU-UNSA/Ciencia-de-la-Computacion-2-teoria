#include<iostream>
#include <conio.h>
using namespace std;
class Operaciones{
    private:
        float numero1,numero2;
    public:
        Operaciones(float _numero1, float _numero2){
            numero1=_numero1;
            numero2=_numero2;
        }
        float getNum1(){
            return numero1;
        }
        float getNum2(){
            return numero2;
        }
        float suma(){
            return  getNum1()+getNum2();
        }
        float cociente(){
            return getNum1()/getNum2();
        }
        int residuo(){
            return int (getNum1())% int(getNum2());
        }
};
class Producto{
    private:
        float valor,IGV,precioVenta,ganancia;
    public:
        Producto(float _valor,float _ganancia){
            valor=_valor;
            ganancia=_ganancia;
            IGV=(valor*19)/100;
            precioVenta=valor+IGV+ganancia;
        }
        float getValor(){
            return valor;
        }
        float getIGV(){
            return IGV;
        }
        float getPrecioVenta(){
            return precioVenta;
        }
};
int main(){
    //operaciones basicas
    /*float num1,num2;
    cout<<"Ingrese el primer numero ";
    cin>>num1;
    cout<<"Ingrese el primer numero ";
    cin>>num2;
    Operaciones Instancia(num1,num2);
    cout<<"La suma es "<<Instancia.suma()<<endl;
    cout<<"El cociente es "<<Instancia.cociente()<<endl;
    cout<<"El resto es "<<Instancia.residuo()<<endl;*/
    //IGV
    float valor,ganar;
    cout<<"Ingrese el valor del producto ";
    cin>>valor;
    cout<<"Ingrese la ganancia que tendra ";
    cin>>ganar;
    Producto Instancia2(valor,ganar);
    cout<<"El IGV del producto es "<<Instancia2.getIGV()<<endl;
    cout<<"El precio de venta del producto es "<<Instancia2.getPrecioVenta()<<endl;
    cout<<"Rpta "<<int(5918%1000)<<endl;
    getch();
    return 0;
}