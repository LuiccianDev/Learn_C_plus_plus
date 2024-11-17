#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

class Alumno {
private:
    string nombre;
    float examen_1;
    float examen_2;
    float examen_3;
    float examen_4;

public:
    Alumno(string nombre, float examen_1, float examen_2, float examen_3, float examen_4) {
        this->nombre = nombre;
        this->examen_1 = examen_1;
        this->examen_2 = examen_2;
        this->examen_3 = examen_3;
        this->examen_4 = examen_4;
    }

    float Promedio() const {
        return (this->examen_1 + this->examen_2 + this->examen_3 + this->examen_4) / 4.0;
    }

    string getnombre() const {
        return this->nombre;
    }
};

void ReportarMayorPuntaje(const vector<Alumno> &alumnos) {
    auto mejorAlumno = max_element(alumnos.begin(), alumnos.end(),
                                [](const Alumno &a, const Alumno &b) {
                                    return a.Promedio() < b.Promedio();
                                });
    if (mejorAlumno != alumnos.end()) {
        cout << "Alumno con mayor promedio: " << mejorAlumno->getnombre() << endl;
        cout << "Con un promedio de: " << mejorAlumno->Promedio() << endl;
    }
}

int main() {
    vector<Alumno> alumnos = {
        {"Juan Perez", 8.5, 9.8, 7.5, 6.5},
        {"Maria Gomez", 9.5, 8.8, 8.5, 7.0},
        {"Luis Fernandez", 7.0, 6.9, 8.6, 9.2}
    };

    // Mostrar información de todos los alumnos
    for (const auto &alumno : alumnos) {
        cout << fixed << setprecision(2);
        cout << "Nombre: " << alumno.getnombre() << endl;
        cout << "Promedio: " << alumno.Promedio() << endl;
    }

    // Reportar el alumno con el mayor puntaje
    ReportarMayorPuntaje(alumnos);

    return 0;
}
