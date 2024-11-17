#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>

#define MAX 20
using namespace std;

struct Trabajador {
    int codigo;
    string nombre;
    double salario;
    int horas_trabajadas;
};


//* Funcion
void RegistrarDatos(vector<Trabajador>& trabajadores, int& n) {
    cout << "Ingrese el numero de trabajadores para registrar (maximo " << MAX << "): ";
    cin >> n;

    if (n > MAX) {
        cout << "El numero de trabajadores no puede ser mayor que " << MAX << endl;
        n = MAX; // Limitar n al tamaño máximo
    }

    cin.ignore(); // Para limpiar el buffer

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el codigo del trabajador " << (i + 1) << " : ";
        cin >> trabajadores[i].codigo;
        cin.ignore(); // Para limpiar el buffer

        cout << "Ingrese el nombre del trabajador " << (i + 1) << " : ";
        getline(cin, trabajadores[i].nombre);

        cout << "Ingrese el salario del trabajador " << (i + 1) << " : ";
        cin >> trabajadores[i].salario;
        cin.ignore(); // Para limpiar el buffer

        cout << "Ingrese las horas trabajadas del trabajador " << (i + 1) << " : ";
        cin >> trabajadores[i].horas_trabajadas;
        cin.ignore(); // Para limpiar el buffer
    }
}

//* Funcion
void OrdenarDatosNombre (vector <Trabajador> & Trabajadores ){
    sort(Trabajadores.begin(),Trabajadores.end(),[](const Trabajador &a, const Trabajador &b){
        return a.nombre < b.nombre ; //* Es una funcion lambda "auto nombre_funcion = [pases de valores directos o captura ](lista de parametro){ return (valor es siempre el valor )}"
    });
    cout << "Lista de Trabajadores Actualizado correctamente " << endl;
    
}

//* Funcion
void OrdenarDatosSalario(vector <Trabajador> & Trabajadores ){

}

//* Funcion
void OrdenarDatosHorasTrabajadas(vector <Trabajador> & Trabajadores ){


}

//* Funcion
void ElimarDatos (vector <Trabajador> & Trabajadores){



}

//* Funcion
void MostrarDatosCodigo (vector<Trabajador>& trabajadores ){
    int codigo_consulta ; //* Es el codigo a consulatar
    cout <<" Ingrese el codigo de Consulta : " << endl;
    cin >> codigo_consulta;
    for (const auto & trabajador  : trabajadores)
    {
        if (trabajador.codigo == codigo_consulta)
        {
            cout << "Datos del Personal \n";
            cout << "Nombre : " << trabajador.nombre << endl;
            cout << "Salario : " << trabajador.salario << endl;
            cout << "Horas trabajadas : " << trabajador.horas_trabajadas << endl;
        }
    }
}

//* Funcion
bool Cambio_bolean(char dato) {
    return (dato == 'S' || dato == 's');
}

//* Funcion
void ModificarDatosCodigo(vector<Trabajador>& trabajadores) {
    int codigo_consulta;
    cout << "Ingrese el codigo de Consulta: ";
    cin >> codigo_consulta;

    for (auto& trabajador : trabajadores) {
        if (trabajador.codigo == codigo_consulta) {
            char modificar_nombre, modificar_salario, modificar_horas;

            cout << "Datos del Personal \n";
            cout << "Nombre: " << trabajador.nombre << endl;
            cout << "Salario: " << trabajador.salario << endl;
            cout << "Horas trabajadas: " << trabajador.horas_trabajadas << endl;

            cout << "¿Desea modificar el nombre? (S/N): ";
            cin >> modificar_nombre;
            cout << "¿Desea modificar el salario? (S/N): ";
            cin >> modificar_salario;
            cout << "¿Desea modificar las horas trabajadas? (S/N): ";
            cin >> modificar_horas;
            if (Cambio_bolean(modificar_nombre)) {
                string nuevo_nombre;
                cin.ignore(); // Limpiar el buffer
                cout << "Ingrese el nuevo nombre: ";
                getline(cin, nuevo_nombre);
                trabajador.nombre = nuevo_nombre;
            }

            if (Cambio_bolean(modificar_salario)) {
                double nuevo_salario;
                cout << "Ingrese el nuevo salario: ";
                cin >> nuevo_salario;
                trabajador.salario = nuevo_salario;
            }

            if (Cambio_bolean(modificar_horas)) {
                int nuevo_horas_trabajadas;
                cout << "Ingrese las nuevas horas trabajadas: ";
                cin >> nuevo_horas_trabajadas;
                trabajador.horas_trabajadas = nuevo_horas_trabajadas;
            }

            cout << "Datos actualizados:\n";
            cout << "Nombre: " << trabajador.nombre << endl;
            cout << "Salario: " << trabajador.salario << endl;
            cout << "Horas trabajadas: " << trabajador.horas_trabajadas << endl;

            return; // Salir después de modificar
        }
    }
    cout << "El código brindado no se encuentra en los registros.\n";
}

//* Funcion principal
int main() {
    vector<Trabajador> trabajadores(MAX);
    int n; // Número de trabajadores a registrar

    int valor ;
    cout << " What operaction would you like to perform ?  select one number" << endl;
    cout << " 1- Record new Data \n";
    cout << " 2- Display Data of a Worker \n"; 
    cout << " 3- Modify Employee Data \n";
    cout << " 4- Display Data Sorted by Name \n"; 
    cout << " 5- Display data sorted by Salary \n"; 
    cout << " 6- Display data sorted by Hours Worked \n";
    cout << " 7- Delete data of an employee \n";
    cout << " 8- Exitr \n"; 
    cin >> n;
    cin.ignore();

    switch (valor)
    {
    case 1:
        RegistrarDatos(trabajadores , n);
        break;
    case 2:
        MostrarDatosCodigo(trabajadores);
        break;
    case 3:
        ModificarDatosCodigo(trabajadores);
        break;
    case 4:
        OrdenarDatosNombre(trabajadores);
        break;
    case 5:
        OrdenarDatosSalario(trabajadores);
        break;
    case 6:
        OrdenarDatosHorasTrabajadas(trabajadores );
        break;
    case 7:
        ElimarDatos(trabajadores );
        break;
    case 8:
        cout << "Living the program..";
        break;
    default:
        break;
    }

    return 0;
}
