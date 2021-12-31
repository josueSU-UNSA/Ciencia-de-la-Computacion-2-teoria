#include<iostream>
#include<conio.h>
#include<math.h>
#include<fstream>
using namespace std;
ifstream archivo("Auxiliar_Repaso.txt");

//texto="";
int contarCaracteres(string auxiliar,int sum){
    if(auxiliar[sum]!='\0'){
        return 1+contarCaracteres(auxiliar,sum+1);
    }
    else{
        return 0; 
    }
}
/*int contarCaracteres(string auxiliar){
    int i=0;
    while(auxiliar[i]!='\0'){
        i++;
    }
    return i;
}*/
//cout<<texto;
int main(){
    string texto=nullptr;
    string aux;
    //int i=0;
    //solo se puede hacer en el main
    cout<<"Hola";
    while (getline(archivo,aux)){
        texto+=aux;            
    }   
    cout<<texto<<endl;
    cout<<contarCaracteres(texto,0);
    //cout<<endl;
    //cout<<"Hello world";
    getch();
    return 0;
}