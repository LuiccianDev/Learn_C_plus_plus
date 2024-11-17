#include <iostream>

using namespace std;


int main() {
    float tasas[3] = {2, 4.5, 9};
    double Capital;
    cout<< "La Capital es : ";
    cin>> Capital;
    if (Capital < 500)
    {
        cout << "Su Interes Mensual es : "<<tasas[0]<<"%"<<endl;

    }
    else if (Capital >= 500 && Capital <= 1500)
    {
        cout << "Su Interes Mensual es : "<<tasas[1]<<"%"<<endl;
    }
    else
    {
        cout << "Su Interes Mensual es : "<<tasas[2]<<"%"<<endl;
    }
    
    

}