#include<iostream>
#include<Figura.h>
class Cuadrado:public Figura{
    public:
        Cuadrado(float _x):Figura(_x){
        }
        float Perimetro(){
            return 4*getX();
        }
        float Area(){
            return getX()*getX();
        } 
};