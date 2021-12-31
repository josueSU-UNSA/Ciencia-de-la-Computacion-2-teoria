#include<iostream>
#include<conio.h>
using namespace std;
int funcSuma(int a ,int b){
    return a+b;
}

int main(){
    int (*p)(int,int);
    p=&funcSuma;    
    int i=10;
    //int a=20;
    int &refi=i;
    //refi=a;
    int *const &refnull=nullptr;
    i++;
    //a++;
    cout<<i<<endl;
    cout<<refi<<endl;
    //cout<<p(3,5)<<endl;
    //cout<<p(7,7)<<endl;
    getch();
    return 0;
}