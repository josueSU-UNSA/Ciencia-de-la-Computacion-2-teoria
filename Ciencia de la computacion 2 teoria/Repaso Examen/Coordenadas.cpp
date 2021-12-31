#include<iostream>
#include "Coordenadas Polares.h"
coordenadaR3::coordenadaR3(){
    this->coordenadaX=0;
    this->coordenadaY=0;
    this->coordenadaZ=0;
}
coordenadaR3::coordenadaR3(int coordenadaX,int coordenadaY, int coordenadaZ){
    this->coordenadaX=coordenadaX;
    this->coordenadaY=coordenadaY;
    this->coordenadaZ=coordenadaZ;
}
//constructor copia
coordenadaR3::coordenadaR3(const coordenadaR3& obj){
    this->coordenadaX=obj.coordenadaX;
    this->coordenadaY=obj.coordenadaY;
    this->coordenadaZ=obj.coordenadaZ;
}
//sobrecarga operador suma
coordenadaR3 coordenadaR3:: operator + (coordenadaR3 obj){
    return coordenadaR3 (this->coordenadaX+obj.getCoordenadaX(),this->coordenadaY+obj.getCoordenadaY(),this->coordenadaZ+obj.getCoordenadaZ());
}
void coordenadaR3::setCoordenadaX(int coordenadaX){
    this->coordenadaX=coordenadaX;
}
int coordenadaR3::getCoordenadaX(){
    return this->coordenadaX;
}
void coordenadaR3::setCoordenadaY(int coordenadaY){
    this->coordenadaY=coordenadaY;
}
int coordenadaR3::getCoordenadaY(){
    return this->coordenadaY;
}
void coordenadaR3::setCoordenadaZ(int coordenadaZ){
    this->coordenadaZ=coordenadaZ;
}
int coordenadaR3::getCoordenadaZ(){
    return this->coordenadaZ;
}
void coordenadaR3::imprimirCoordenada(){
    std::cout<<"( "<<getCoordenadaX()<<" , "<<getCoordenadaY()<<" , "<<getCoordenadaZ()<<" )";
    std::cout<<std::endl;
}
coordenadaR3::~coordenadaR3(){
    std::cout<<"Terminado" <<std::endl;
}

//coordenadas polares

coordenadaPolar::coordenadaPolar(int coordenadaX,int coordenadaY,int coordenadaZ,int radio,int angulo):coordenadaR3::coordenadaR3(coordenadaX,coordenadaY,coordenadaZ){
    this->radio=radio;
    this->angulo=angulo ;
}
void coordenadaPolar::setRadio(int radio){
    this->radio=radio;
}
int coordenadaPolar::getRadio(){
    return this->radio;
}
void coordenadaPolar::setAngulo(int angulo){
    this->angulo=angulo;
}
int coordenadaPolar::getAngulo(){
    return this->angulo;
}
void coordenadaPolar::imprimirCoordenada(){
    std::cout<<"( "<<getRadio()<<" , "<<getAngulo()<<" , "<<getCoordenadaX()<<" , "<<getCoordenadaY()<<" , "<<getCoordenadaZ()<<" )";
}
coordenadaPolar::~coordenadaPolar(){
    std::cout<<"Terminado derivada" <<std::endl;
}
