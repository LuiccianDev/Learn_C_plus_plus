#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <limits>
using namespace std;

// Creando una estructura 
struct Empleado {
    int codigo;
    string nombre;
    float valor_hora;
    float horas_trabajadas;
};

// Función para ingresar datos de empleado
void IngresarDatos(vector<Empleado> &empleados) {
    Empleado empleado;
        cout << "-- Ingrese los datos del Empleado --" << endl;
        cout << "Codigo: ";
        cin >> empleado.codigo;
        cin.ignore(); // Limpiar el buffer antes de leer el nombre
        cout << "Nombre: ";
        getline(cin, empleado.nombre); // Usar getline para permitir nombres con espacios
        cout << "Sueldo por Hora: ";
        cin >> empleado.valor_hora;
        cout << "Horas Trabajadas: ";
        cin >> empleado.horas_trabajadas;
    empleados.push_back(empleado);
}

void MostrarPorNombre(vector<Empleado> &empleados) {
    vector<Empleado> copy_empleados = empleados;
    sort(copy_empleados.begin(), copy_empleados.end(), [](const Empleado &a, const Empleado &b) {
        return a.nombre < b.nombre;
    });
    for (auto &empleado : copy_empleados) {
        cout << "-- Datos del empleado -- \n";
        cout << "Nombre: " << empleado.nombre << endl;
        cout << "Sueldo: " << empleado.valor_hora << endl;
        cout << "Horas Trabajadas: " << empleado.horas_trabajadas << endl;
    }
}

void MostrarPorSueldo(vector<Empleado> &empleados) {
    vector<Empleado> copy_empleados = empleados;
    sort(copy_empleados.begin(), copy_empleados.end(), [](const Empleado &a, const Empleado &b) {
        return a.valor_hora < b.valor_hora;
    });
    for (auto &empleado : copy_empleados) {
        cout << "-- Datos del empleado -- \n";
        cout << "Nombre: " << empleado.nombre << endl;
        cout << "Sueldo: " << empleado.valor_hora << endl;
        cout << "Horas Trabajadas: " << empleado.horas_trabajadas << endl;
    }
}

void MostraDatosTrabajador(vector<Empleado> &empleados) {
    int n;
    cout << "Ingresar el Codigo del empleado a Consultar: " << endl;
    cin >> n;

    bool encontrado = false; // Variable para verificar si se encontró el empleado

    for (auto &empleado : empleados) {
        if (empleado.codigo == n) {
            cout << "-- Datos del Empleado -- " << endl;
            cout << "Nombre: " << empleado.nombre << endl;
            cout << "Sueldo: " << empleado.valor_hora << endl;
            cout << "Horas Trabajadas: " << empleado.horas_trabajadas << endl;
            encontrado = true; // Marcar como encontrado
            break; // Salir del bucle una vez encontrado
        }
    }

    if (!encontrado) {
        cout << "Código inválido" << endl; // Mostrar mensaje solo si no se encontró
    }
}

// Función principal
int main() {
    vector<Empleado> empleados;
    int opcion;

    while (true) {
        cout << "Ingrese un numero (1-5) \n";
        cout << "1-Ingresar datos de un nuevo trabajador \n";
        cout << "2-Mostrar lista ordenada por nombre \n";
        cout << "3-Mostrar lista ordenada por sueldo \n";
        cout << "4-Mostrar datos de un trabajador \n";
        cout << "5-Salir \n";
        cout << "Ingresar opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1:
                IngresarDatos(empleados);
                break;
            case 2:
                MostrarPorNombre(empleados);
                break;
            case 3:
                MostrarPorSueldo(empleados);
                break;
            case 4:
                MostraDatosTrabajador(empleados);
                break;
            case 5:
                return 0;
            default:
                cout << "Opcion invalida" << endl;
        }
    }

    return 0;
}
