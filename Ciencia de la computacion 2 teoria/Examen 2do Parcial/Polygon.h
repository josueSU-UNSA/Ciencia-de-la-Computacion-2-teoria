#ifndef _POLYGON_H_
#define _POLYGON_H_
#include<iostream>
using namespace std;
class Polygon{
    protected:
        int width,height;
    public:
        Polygon(int a,int b):width(a),height(b){}
        virtual int area(void)=0;
        void printarea(){
            cout<<this->area()<<"\n";
        }
};

#endif