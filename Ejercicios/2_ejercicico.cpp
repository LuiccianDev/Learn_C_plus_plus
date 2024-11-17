#include <iostream>
using namespace std;

int main(){
    int V , M, Total ;
    double V_Porcent , M_Porcent ;
    cout << "Ingre el total de Varones : ";
    cin >> V;
    cout << "Ingre el total de Mujeres : ";
    cin >> M;
    Total = V + M;
    V_Porcent = (static_cast<double>(V) / Total)*100;
    M_Porcent = (static_cast<double>(M) / Total)*100;
    cout << "El Porcentaje de Varones es: "<< V_Porcent<<"%"<< endl;
    cout << "El Porcentaje de Mujeres es: "<< M_Porcent<<"%"<< endl;
    return 0;
}