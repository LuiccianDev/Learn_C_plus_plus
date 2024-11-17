#include <iostream>
#include <iomanip> // Para setprecision
using namespace std;

int main() {
    // Definir la cantidad de dinero en soles
    double cantidadSoles;
    cout << "Ingrese la cantidad de dinero en soles: ";
    cin >> cantidadSoles;

    // Definir las tasas de conversión
    double tasas[] = {3.50, 0.90, 0.98}; // Soles a dólares, euros y francos respectivamente

    // Calcular las cantidades convertidas
    double cantidadDolares = cantidadSoles / tasas[0];
    double cantidadEuros = cantidadSoles / tasas[1];
    double cantidadFrancos = cantidadSoles / tasas[2];

    // Mostrar los resultados
    cout << fixed << setprecision(2); // Configurar la precisión decimal
    cout << "Cantidad en dolares: $" << cantidadDolares << endl;
    cout << "Cantidad en euros: " << cantidadEuros << " euros" << endl;
    cout << "Cantidad en francos: " << cantidadFrancos << " francos" << endl;

    return 0;
}

