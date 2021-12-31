//puntero de puntero
#include<iostream>
#include"conio.h"
using namespace std;
void sum(int &a){
    a+=1;
}
int main(){
    int x=5;
    int*p=&x;
    int**q=&p;
    int***r=&q;
    cout<< ***r<<endl;
    ***r=100;
    cout<<***r<<endl;
    cout<<x<<endl;
    //cout<< r<<endl;
    int a=10;
    sum(a);
    cout<<a<<endl;
    getch();
    return 0;
}