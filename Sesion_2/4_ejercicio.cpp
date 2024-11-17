#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float x, y;
    cout << "Ingrese el valor de 'x': ";
    cin>> x;
    if (x<0)
    {
        y = pow(x,3) + (x/2);
        cout << "El valor de 'y' es : "<<y<<endl;
    }
    else
    {
        y= pow(x,2)*4  - 2;
        cout << "El valor de 'y' es : "<<y<<endl;
    }
    

    return 0 ;
}