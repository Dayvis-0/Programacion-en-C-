/*Ejercicio 7.- Escriba un programa que solicite una edad e indique en la salida estandar
si la edad intruducida esta en rango de [18-25].*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int edad;

    cout<<"Digite su edad: "; cin>>edad;

    if(edad >= 18 && edad<=25){
        cout<<"Su edad esta en el rango de [18-25]";
    }
    else{
        cout<<"Su edad no esta en el rango de [18-25]";
    }

    cout<<"\n";
    getch();
    return 0;
}