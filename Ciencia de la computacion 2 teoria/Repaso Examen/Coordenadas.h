#include<iostream>
class coordenadaR3{
    private:
        int coordenadaX,coordenadaY,coordenadaZ;
    public:
        coordenadaR3();
        coordenadaR3(int coordenadaX,int coordenadaY, int coordenadaZ);
        //constructor copia
        coordenadaR3(const coordenadaR3&);
        coordenadaR3 operator+(coordenadaR3 obj);
        void setCoordenadaX(int coordenadaX);
        int getCoordenadaX();
        void setCoordenadaY(int coordenadaY);
        int getCoordenadaY();
        void setCoordenadaZ(int coordenadaZ);
        int getCoordenadaZ();
        virtual void imprimirCoordenada();
        ~coordenadaR3();
};
//coordenadaR3
/*
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
*/
//coordenadas polares
/*
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
*/