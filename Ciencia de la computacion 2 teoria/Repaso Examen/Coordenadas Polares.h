#include<iostream>
#include"Coordenadas.h"
class coordenadaPolar:public coordenadaR3 {
    private:
        int radio,angulo;
    public:
        coordenadaPolar(int ,int ,int ,int ,int );
        void setRadio(int);
        int getRadio();
        void setAngulo(int);
        int getAngulo();
        void imprimirCoordenada();
        ~coordenadaPolar();
};