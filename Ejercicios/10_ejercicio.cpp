#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x,y;
    cout <<"Ingrese el valor de 'x' : ";
    cin>> x;

    if (x <= 0)
    {
        y = pow(x,2) + 5;
        cout<< "El Valor de 'y' es : "<< y<<endl;
    }
    else if (x > 0 && x < 5)
    {
        y = 3*x - 1;
        cout<< "El Valor de 'y' es : "<< y<<endl;
    }
    else
    {
        y = pow(x,2) - (4*x) + 5;
        cout<< "El Valor de 'y' es : "<< y<<endl;
    }
    
    return 0;
}