/*La sentencia for:

    for (expr1;  expresion logica; expr2){
            conjunto de instrucciones
    }
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){

    int i;

    for(i=1; i<=10; i ++){
        cout<<i<<endl;
    }

    cout<<"\n"<<endl;

    for(i=10; i>=1; i --){
        cout<<i<<endl;
    }

    getch();
    return 0;
}
