#include "Polygon.h"
#include<iostream>
using namespace std;
class Rectangle:public Polygon{
    protected:
        
    public:
        Rectangle(int a,int b):Polygon(a,b){
        }
        virtual int area(void){
            return this->width*this->height/2;
        }
        void printarea(){
            cout<<this->area()<<"\n";
        }
};