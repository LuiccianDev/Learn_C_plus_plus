#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
void PromedioPonderado ( const vector<float> &n, float &VPromedio){
    float inicializador = 0.0;
    for (auto c  : n)
    {
        inicializador += c;
    }
    VPromedio = inicializador / n.size();
}

int main(void)

{
    int cantidad ;
    float Promedio;
    cout << "Ingrese en numero de datos que ingresara : " ;
    cin >> cantidad;
    vector<float> n(cantidad) ;
    cout << "Ingrese los valores " <<endl;
    int i = 0;
    do
    {
        i += 1;
        cout << "El valor de n["<< i <<"] : ";
        cin >> n[i];
        
    } while ( i < cantidad);
    for (int i = 1; i <= n.size(); i++)
    {
        cout << "El valor Peso " << i<< " es : " << n[i] <<endl;
    }
    PromedioPonderado(n, Promedio);
    cout << "El Promedio ponderado de los valores es : " << Promedio <<endl;

    return 0;
}