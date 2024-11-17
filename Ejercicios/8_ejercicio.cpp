#include <iostream>

using namespace std;

int main(){
    int a, b, c ,mayor;
    cout << "Ingrese el valor a : ";
    cin >> a ;
    cout << "Ingrese el valor b : ";
    cin >> b ;
    cout << "Ingrese el valor c : ";
    cin >> c ;
    mayor = a;
    if (b > mayor) {
        mayor = b;
    }
    if (c > mayor) {
        mayor = c;
    }
        // Imprimir el mayor valor
    cout << "El mayor es: " << mayor << endl;

    return 0;
}