
#include <iostream>
#include <string>

using namespace std;


int main(){
/**
Realiza un programa que lea l�neas de la entrada est�ndar hasta que se lea una l�nea
cuyo contenido sea la cadena FIN. El programa debe mostrar en la salida est�ndar la
l�nea m�s larga de las le�das y tambi�n la menor desde un punto de vista lexicogr�fico.

*/
string frase,mayor,menor;


cout<<"introduzca una frase de caracteres"<<endl;
getline(cin>>ws,frase);
menor = mayor = frase;
while(frase!="FIN")

    {
        cout<<"introduzca una frase de caracteres"<<endl;
        getline(cin>>ws,frase);
        if(frase.length() >= mayor.length())
            {

                mayor = frase;

            }
        if(menor.length() >= frase.length())
            {

                menor = frase;

            }








    }


 cout<<"la frase mas larga es "<<mayor<<endl;
    cout<<"la frase mas corta es "<<menor<<endl;


}

