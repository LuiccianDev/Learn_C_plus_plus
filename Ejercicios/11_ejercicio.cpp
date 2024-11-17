#include <iostream>
#include <map>
using namespace std;

int main() {
    double area = 123.45;
    map<char, int> zonas = {{'A', 70}, {'B', 60}, {'C', 45}, {'D', 30}};
    char zona_escogida = 'A'; // Zona escogida inicialmente (puedes cambiarla según tus necesidades)

    // Verificar si la zona escogida está en el diccionario
    if (zonas.find(zona_escogida) != zonas.end()) {
        // Calcular el precio total multiplicando el precio por metro cuadrado de la zona escogida por el área
        double valor = zonas[zona_escogida] * area;

        // Imprimir el precio total
        cout << "El Precio Total es : " << valor << endl;
    } else {
        cout << "Zona no válida." << endl;
    }

    return 0;
}
