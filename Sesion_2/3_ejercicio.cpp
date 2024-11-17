#include <iostream>
using namespace std;

int main(){
    const int ProMensual = 100, PropAdicinal = 20;
    int ExamAprobados ;
    cout<< "Ingrese el nnumero de examnes Aprobados : ";
    cin >> ExamAprobados;

    int total = ProMensual + (ExamAprobados*PropAdicinal);

    cout << "La Propina total del mes es : "<<total<<endl;
    return 0;
    
}