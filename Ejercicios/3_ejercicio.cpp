#include <iostream>
using namespace std;

int main(){
    /* Leer un número entero que represente días y determinar a cuanto 
equivale en años, meses y días (Asumir que todos los años tienen 360 días y 
que todos los meses tienen 30 días).*/
    const int Year = 360, mes = 30 ;
    int dias = 4600;
    int years = dias /Year, dias_faltante = dias % Year;
    int meses = dias_faltante/ mes, dias_dias = dias_faltante % mes;
    cout << "Es :"<<years<<" years, "<< meses <<" month, "<< dias_dias<<" days" << endl;
    return 0;

}