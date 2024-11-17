#include <iostream>
using namespace std;


int main(){
    string nombre = "william",genero = "Masculino";
    int edad = 18;
    if (genero == "Masculino")
    {
        cout << "Su genero es Masculino "<<endl;
    }
    else
    {
        cout << "Su genero es Femeninio"<<endl;
    }
    if (edad >= 18)
    {
        cout << "Es mayor de edad"<< endl;
    }
    else
    {
        cout << "Es menor de edad"<<endl;
    }

    return 0;
}