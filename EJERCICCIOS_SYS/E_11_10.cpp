#include <iostream>
#include <string.h>
#include <math.h>
#

using namespace std;

class Alumno
{
private:
    string nombre;
    double nota1;
    double nota2;
    double nota3;
    
public:
    //* Constructor
    Alumno (string n, double n1, double n2, double n3) : nombre(n), nota1(n1), nota2(n2), nota3(n3){}

    //! Otra formnad e constructor
    /* Alumno (string n, double n1, double n2, double n3){
        nombre = n;
        nota1 = n1;
        nota2 = n2;
        nota3 = n3;
    } */
    //! Otra formnad e constructor
    /* Alumno (string n, double n1, double n2, double n3){
        this->nombre = nombre;
        this->nota1 = nota1;
        this->nota2 = nota2;
        this->nota3 = nota3; */
    //* En este tipo de constructor se puede sifrenciar cual
    //* es el objeto y cual es le parametro para evita ambigueda

    //todo No Modifica los valores
    double CalcularPromedio () const {
        return (this->nota1 + this->nota2 + this->nota3) /3.0;
    }
    
};






int main(void)
{
    
return 0;
}