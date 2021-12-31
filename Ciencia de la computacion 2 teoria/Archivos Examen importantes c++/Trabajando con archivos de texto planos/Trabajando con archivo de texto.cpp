#include<iostream>
#include<conio.h>
#include<math.h>
#include<fstream>
using namespace std;
ifstream archivo("Auxiliar_Repaso.txt");
int main(){
    string aux;
    string texto="";
    //almacenarString(auxiliar);
    while (getline(archivo,aux)){
        texto+=aux;
    } 
    cout<<texto;
    getch();
    return 0;
}