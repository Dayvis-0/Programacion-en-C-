/*Ejercicio 8.- Escriba una funcion nombreada cambio() que tenga un parametro en 
numero entero y seis parametros de referencia en numero entero nombrados cien, cincuenta, 
veinte, diez, cinco y uno, respectivamente. La funcion tiene que considerar el valor
entero transmitido como una cantidad de dolares y convertir el valor en el numero menor 
de billetes equivalentes.*/

#include<iostream>
#include<conio.h>

using namespace std;

void cambio(int, int&, int&, int&, int&, int&, int&);

int main(){
    int valor, cien = 0, cincuenta = 0, veinte = 0, diez = 0, cinco = 0, uno = 0;
 
    cout<<"Digite un valor: "; cin>>valor;

    cambio(valor, cien, cincuenta, veinte, diez, cinco, uno);

    cout<<"Cien: "<<cien<<endl;
    cout<<"Cincuenta: "<<cincuenta<<endl;
    cout<<"Veinte: "<<veinte<<endl;
    cout<<"Diez: "<<diez<<endl;
    cout<<"Cinco: "<<cinco<<endl;
    cout<<"Uno: "<<uno<<endl;

    getch();
    return 0;
}

void cambio(int valor, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){
    cien = valor/100;
	valor %= 100;
	cincuenta = valor/50;
	valor %= 50;
	veinte = valor/20;
	valor %= 20;
	diez = valor/10;
	valor %= 10;
	cinco = valor/5;
	uno = valor%5;
}
