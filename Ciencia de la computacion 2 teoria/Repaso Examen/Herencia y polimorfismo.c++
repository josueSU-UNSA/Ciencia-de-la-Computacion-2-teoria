#include<iostream>
#include<conio.h>
#include<math.h>
#include<fstream>
#include"Coordenadas.cpp"
using namespace std;
/*class coordenadaR3{
    private:
        int coordenadaX,coordenadaY,coordenadaZ;
    public:
        coordenadaR3(){
            this->coordenadaX=0;
            this->coordenadaY=0;
            this->coordenadaZ=0;
        }
        coordenadaR3(int coordenadaX,int coordenadaY, int coordenadaZ){
            this->coordenadaX=coordenadaX;
            this->coordenadaY=coordenadaY;
            this->coordenadaZ=coordenadaZ;
        }
        void setCoordenadaX(int coordenadaX){
            this->coordenadaX=coordenadaX;
        }
        int getCoordenadaX(){
            return this->coordenadaX;
        }
        void setCoordenadaY(int coordenadaY){
            this->coordenadaY=coordenadaY;
        }
        int getCoordenadaY(){
            return this->coordenadaY;
        }
        void setCoordenadaZ(int coordenadaZ){
            this->coordenadaZ=coordenadaZ;
        }
        int getCoordenadaZ(){
            return this->coordenadaZ;
        }
        virtual void imprimirCoordenada(){
            cout<<"( "<<getCoordenadaX()<<" , "<<getCoordenadaY()<<" , "<<getCoordenadaZ()<<" )";
            cout<<endl;
        }
        ~coordenadaR3(){
            cout<<"Terminado" <<endl;
        }
};
class coordenadaPolar:public coordenadaR3 {
    private:
        int radio,angulo;
    public:
        coordenadaPolar(int coordenadaX,int coordenadaY,int coordenadaZ,int radio,int angulo):coordenadaR3(coordenadaX,coordenadaY,coordenadaZ){
            this->radio=radio;
            this->angulo=angulo ;
        }
        void setRadio(int radio){
            this->radio=radio;
        }
        int getRadio(){
            return this->radio;
        }
        void setAngulo(int angulo){
            this->angulo=angulo;
        }
        int getAngulo(){
            return this->angulo;
        }
        ~coordenadaPolar(){
            cout<<"Terminado derivada" <<endl;
        }

        void imprimirCoordenada() override{
            cout<<"( "<<getRadio()<<" , "<<getAngulo()<<" , "<<getCoordenadaX()<<" , "<<getCoordenadaY()<<" , "<<getCoordenadaZ()<<" )";
        }

};*/
int main(){
    coordenadaR3 coordenada;
    coordenadaR3 coordenada2(3,7,8);
    coordenadaR3 coor(4,5,9);
    coordenada2.imprimirCoordenada();
    coor.imprimirCoordenada();
    //coordenada.~coordenadaR3();
    coordenadaR3 suma;
    suma=coordenada2+coor;
    suma.imprimirCoordenada();
    //coordenada2.imprimirCoordenada();
    coordenadaPolar coordenada3(3,7,8,4,45);
    coordenada3.imprimirCoordenada();
    //coordenada3.coordenadaX;
    //coordenada2.~coordenadaR3();
    getch();
    return 0;
}