#include<iostream>
class Figura{
    private:
        float x;
    public:
        Figura(float _x){
            x=_x;
        }
        float getX(){
            return x;
        }
        virtual float Perimetro(){
            return 0;
        }
        virtual float Area(){
            return 0;
        }
};