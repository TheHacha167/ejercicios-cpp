
#include <iostream>
using namespace std;

int tmax=30;///tama�o max vector



int main(){
/**
Escribe un programa que lea de la entrada est�ndar una serie de n�meros,
almacen�ndolos en un vector. Una vez rellenado el vector con los n�meros le�dos, muestre
en la salida est�ndar los n�meros del vector con sus �ndices asociados.
*/
   cout<<"este programa almacena numeros en un vector y hace la salida con su posicion"<<endl;
   cout<<"indique el maximo de numeros a introducir"<<endl;
    cin>>tmax;
    float V[tmax];
    for(int i=0;i<tmax;++i)
        {
        cout<<"introduzca un numero para guardarlo en la posicion"<<i<<endl;
        cin>>V[i];
        }
   for(int i=0;i<tmax;++i)
        {
        cout<<"el valor de la posicion "<<i<<" es "<<V[i]<<endl;

        }

