
#include <iostream>
using namespace std;
int i=0,total=0,resultado=0;
int main(){
  /*
Realice un programa que calcule y muestre en la salida est�ndar la suma de los
cuadrados de los n�meros enteros del 1 al 10.
Nota: la soluci�n es 385 = 12 + 22 + ... + 102.
  */

 cout<<"este programa calcula suma de los cuadrados de los n�meros enteros del 1 al 10"<<endl;
    for(int i=1;i<=10;++i){
        resultado = i * i;
       total = (total + resultado);


    }

 cout<<"el resultado es "<<total<<endl;
}

