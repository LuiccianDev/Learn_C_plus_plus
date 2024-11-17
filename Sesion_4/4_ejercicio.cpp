#include <iostream>

using namespace std;

int main(){
    int suma ;
    suma = 0;
    for (int i = 0; i <= 10; i++)
    {
        suma += i;
    }
    
    cout << "La suma de los primeros 10 números enteros es: " << suma << endl;
    
    return 0;
}
