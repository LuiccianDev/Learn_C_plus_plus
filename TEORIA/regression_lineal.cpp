#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
double redondear ( double numero){
    return round(numero* 100)/100.0;
}
//* funcion para calcular  la media del vector 
double media (const vector<double> &data){
    double suma  = 0.0;
    for (const double& valor : data)
    {
        suma += valor;
    }
    return suma/data.size();
}
//* fincion para calcular la covarianza entre dos vectores
double covarianza ( const vector<double>& x, const vector<double>& y ){
    if (x.size() != y.size() || x.empty())
    {
        cerr<<"Los vectores deben tener la misma longitud  y no pueden estar vacias."<<endl;
        return 0.0;

    }
    double media_x = media(x);
    double media_y = media(y);
    double covarianza = 0.0;
    for (size_t i = 0; i < x.size(); i++)
    {
        covarianza += (x[i] - media_x)*(y[i] - media_y);

    }
    return covarianza/(x.size() - 1);
}
//* funcion para calcular la pendiente y la constanete de la regresion lineal 
void regresion ( const vector<double>& x, const vector<double>& y, double& pendiente, double& interseccion ){
    if (x.size() != y.size() || x.empty())
    {
        cerr<<"Los vectores deben tener la misma longitud  y no pueden estar vacias."<<endl;
        return;
    }
    double covarianza_x = covarianza(x, y);
    double covarianza_y = covarianza(x, y);
    double media_x = media(x);
    double media_y = media(y);
    pendiente = covarianza_y / covarianza_y;
    interseccion = redondear(media_y / media_x);
}
int main(int argc, char const *argv[])
{
    vector <double> x = {1, 2, 3, 4, 5, 6, 7, 8};
    vector <double> y = {0.5, 2.5, 2, 4, 3.5, 5, 7, 9.5};
    double pendiente , interseccion;
    regresion (x, y, pendiente, interseccion);
    cout << "La Ecuacion de la regresion lineal y = "<< pendiente << "x + " << interseccion << endl;

    return 0;
}
