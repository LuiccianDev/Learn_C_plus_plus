#include <iostream>
#include <algorithm> // Para usar la función min()
using namespace std;

int main() {
    double notas[4];
    cout << "Ingrese las notas de los 4 examenes: ";
    for (int i = 0; i < 4; ++i) {
        cin >> notas[i];
    }

    // Encontrar la menor nota
    double nota_minima = *min_element(notas, notas + 4);

    // Eliminar la menor nota
    double suma = 0;
    for (int i = 0; i < 4; ++i) {
        if (notas[i] != nota_minima) {
            suma += notas[i];
        }
    }

    // Calcular el promedio final
    double promedio = suma / 3;

    // Mostrar resultados
    cout << "La nota eliminada es: " << nota_minima << endl;
    cout << "El promedio final del alumno es: " << promedio << endl;

    return 0;
}
