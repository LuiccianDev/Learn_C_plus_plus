#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;

struct ValoresPolinomio
{
    int exponente;
    float coeficiente;
};
void Resultado ( const vector<ValoresPolinomio> &polinomio , float & n){
    float resultado = 0.0 ;
    for (int i = 0; i < polinomio.size(); i++)
    {
        resultado += ((polinomio[i].coeficiente)*(pow(n,polinomio[i].exponente)));
    }
    cout << std::fixed<< std::setprecision(2);
    //* Me redonde hacia arriba utilizando el metodo 'round'  */
    cout << " El valor numerico del polinomio es : " << resultado  <<endl;
}

int main(void)
{
    vector<ValoresPolinomio> polinomio;
    polinomio = {{12,2},
                {13,3},
                {15,5}};
    float x ;
    cout << "Ingrese el valor de x : ";
    cin >> x;
    cin.ignore();
    Resultado(polinomio, x);

return 0;
}