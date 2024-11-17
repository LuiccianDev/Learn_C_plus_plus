#include <iostream>
#include <vector>

using namespace std;

double Lagrange ( const vector<double>& x , const vector<double> & y, double x_1){
    int n = x.size();
    double resultado = 0.0;

    for (int i = 0; i < n; i++)
    {
        double term = y[i];
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                term *= (x_1 - x[j])/(x[i] - x[j]);
            }
            
        }
        resultado += term ;
    }
    return resultado;
}
int main(void)
{
    int n ;
    cout << "Ingrese el numero de puntos "<<endl;
    cin>> n;
    vector <double> x(n);
    vector <double> y(n);

    cout << "Ingrese los puntos (x, y) "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout <<"Punto "<< i + 1 <<": ";
        cin>> x[i] >> y[i];

    }
    double x_1;
    cout<< "Ingrese el valor de x_1 para evaluar el polinimio de Lagrange ";
    cin >> x_1 ;

    double res = Lagrange(x , y, x_1);
    cout << "El valor del polinimio de Lagrange en xi es : "<< res << endl;

    return 0;
}