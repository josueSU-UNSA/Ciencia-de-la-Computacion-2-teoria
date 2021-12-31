#include <iostream>
#include<iomanip>
#include<cstdlib>
#include <cmath>
using namespace std;
void almacenarNotas(int);
int nroNotasIngresadas,*listaCalif,*listaFrecuencias;
void almacenarNotas();
int promedio();
int aprobados();
int desaprobados();
int porcentajeAprobados();
int porcentajeDesaprobados();
int califmayor9();
int varianza();
int moda();
int main(){
    almacenarNotas();
    cout<<"-El promedio general es: "<<promedio()<<endl;
    cout<<"-La cantidad de alumnos aprobados es: "<<aprobados()<<endl;
    cout<<"-La cantidad de alumnos desaprobados es: "<<desaprobados()<<endl;
    cout<<"-El porcentaje de aprobados es: "<<porcentajeAprobados()<<endl;
    cout<<"-El porcentaje de desaprobados es: "<<porcentajeDesaprobados()<<endl;
    cout<<"-La cantidad de alumnos con nota mayor igual a 9 es: "<<califmayor9()<<endl;
    cout<<"-La varianza de las notas es: "<<varianza()<<endl;
    cout<<"-La moda de las notas es: "<<moda()<<endl;
    delete [] listaCalif;
    system("PAUSE");
    return 0;
}
void almacenarNotas(){
    cout<<"Ingrese la cantidad de notas a ingresar: ";
    cin>>nroNotasIngresadas;
    listaCalif=new int [nroNotasIngresadas];
    for (int i=0;i<nroNotasIngresadas;i++){
        cout<<i+1<<". Ingrese la nota del alumno: ";
        cin>>listaCalif[i];
    }
}
int promedio(){
    int count=0;
    for (int i=0;i<nroNotasIngresadas;i++){
        count+=listaCalif[i];
    } 
    return (count/nroNotasIngresadas);
}
int aprobados(){
    int nroaprobados=0;
    for(int i=0;i<nroNotasIngresadas;i++){
        if(listaCalif[i]>=6){
            nroaprobados+=1;
        }
    }
    return nroaprobados;
    
}
int desaprobados(){
    int nrodesaprobado=0;
    for(int i=0;i<nroNotasIngresadas;i++){
        if(listaCalif[i]<6){
            nrodesaprobado+=1;
        }
    }
    return nrodesaprobado;
}
int porcentajeAprobados(){
    return (aprobados()*100/nroNotasIngresadas);
}
int porcentajeDesaprobados(){
    return (100-porcentajeAprobados());
}
int califmayor9(){
    int nroMayor9=0;
    for(int i=0;i<nroNotasIngresadas;i++){
        if(listaCalif[i]>=9){
            nroMayor9+=1;
        }
    }
    return nroMayor9;
}
int varianza(){
    int contador=0;
    for(int i=0;i<nroNotasIngresadas;i++){
        contador+=pow((listaCalif[i]-promedio()),2);
        }
    return contador/(nroNotasIngresadas-1);
}
int moda(){
    listaFrecuencias=new int [nroNotasIngresadas];
    for(int i=0;i<nroNotasIngresadas;i++){
        listaFrecuencias[i]=0;
    }
    for(int i=0;i<nroNotasIngresadas;i++){
        for(int j=0;j<nroNotasIngresadas;j++){
            if( listaCalif[i]==listaCalif[j]){
                listaFrecuencias[j]+=1;
            }
            }
        }
    int mayor=0;
    for (int i=1;i<nroNotasIngresadas;i++){
        if(listaFrecuencias[mayor]<listaFrecuencias[i]){
            mayor=i;
        }
    }
    return listaCalif[mayor];
}
