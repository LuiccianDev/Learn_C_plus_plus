//*Utilizacion de  clases 

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

#include <chrono>
#include <thread>

using namespace std;
class Alumno {
    private:
        string nombre;
        float examen_1;
        float examen_2;
        float trabajos;
    public:
        Alumno ( string nombre, float examen_1, float examne_2, float trabajos){
            this->nombre = nombre;
            this->examen_1 = examen_1;
            this->examen_2 = examne_2;
            this->trabajos = trabajos;
        }
        //* Metodo para promediar notas
        float CalcularPromedio() const {
            return (this->examen_1*(0.25) + this->examen_2*(0.25) + this->trabajos*(0.5));
        }
        //* Un getter se utiliza para mostrar datos de un variable privada
        //* La funcin seimpre comienza con get ams el nombre de la varible

        string getnombre() const {
            return this->nombre;
        }
        float getexamen_1() const{
            return this->examen_1;
        }
        //* Un setter es para modificar un variable privada para mantener la encapsulacion
        //* La funcion comineza son un set mas el nombre del variable

        void setexamen_1(float Nota_nueva){
            this->examen_1 = Nota_nueva;
        }
};

bool ComparaAlumnos(const Alumno & a, const Alumno &b){
    return a.CalcularPromedio() > b.CalcularPromedio();
}
int main(void)
{
    vector <Alumno> alumnos ;
    int n ;
    cout << "Ingrese el numero de ALumnos : ";
    cin >> n ;

    for (int i = 0; i < n; i++)
    {
        string nombre;
        float examen_1 , examen_2, trabajos;
        cout << "Ingrese el nombre del Alumno : ";
        cin >> nombre ;
        cin.ignore();
        cout << "Ingrese la nota del Examen 1 : ";
        cin >> examen_1;
        cout << "Ingrese la nota del Examen 2 : ";
        cin >> examen_2;
        cout << "Ingrese la nota de los Trabajos : ";
        cin >> trabajos;
        alumnos.emplace_back(nombre, examen_1, examen_2, trabajos);
    }
    
    sort(alumnos.begin(), alumnos.end(), ComparaAlumnos);

    double SumaPromedios = 0.0;
    for( const auto& alumno : alumnos){
        SumaPromedios += alumno.CalcularPromedio();

    }

    double PromedioGeneral = SumaPromedios/n;
    
    cout<< "Esperando 2 segundos .." << endl;

    //* Una forma para retrasae la ejecucion de un codigo
    std::this_thread::sleep_for(std::chrono::seconds(2));


    std::cout << std::fixed << std::setprecision(2);
    cout << "-- Reporte de Alumnos -- \n";
    for (const auto & alumno : alumnos)
    {
        cout << "nombre : " << alumno.getnombre() <<"\n"
                << "Promedio : " << alumno.CalcularPromedio() << endl;
    }
    cout << "Promdeio Generla del Alumnado : " << PromedioGeneral << endl;
    return 0;
}