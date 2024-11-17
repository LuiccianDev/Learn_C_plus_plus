#include <iostream>
#include <string.h>

using namespace std;

void dia_semana(int &n, string &valor){

    switch (n)
    {
    case 1:
        valor = "Lunes";
        break;
    case 2:
        valor = "Martes";
        break;
    case 3:
        valor = "Miercoles";
        break;
    case 4:
        valor = "Jueves";
        break;
    case 5:
        valor = "Viernes";
        break;
    case 6:
        valor = "Sabado";
        break;
    case 7:
        valor = "Domingo";
        break;
    default:
        break;
    }

}

int main(void)
{
    int n;
    string valor;
    cout<< "Ingrese un numero entre 1 y 7 :";
    cin >> n;
    dia_semana(n,valor);
    cout<<"El numero "<< n <<" correponde al dia " << valor <<endl;
    return 0;
}