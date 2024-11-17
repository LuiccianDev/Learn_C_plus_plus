#include <iostream>

using namespace std;

int main(){
    int m, a ,d ;
    cout<< "Ingrese el anio: ";
    cin >> a;
    cout << "Ingrese un numero del 1 al 12 : ";
    cin >> m;
    switch (m)
    {
    case 1:case 3:case 5:case 7:case 8: case 10: case 12:
        d = 31;
        cout << "En el anio "<<a<< "en el mes de "<< m << "hay "<<d<<endl;
        break;
    case 4 : case 6 : case 9 : case 11 :
        d = 30;
        cout << "En el anio "<<a<< "en el mes de "<< m << "hay "<<d<<endl;
    case 2 :
        if ((a%4 == 0 && a%100 != 0) || a%400 ==0)
        {
            d = 29;
            cout << "En el anio "<<a<< "en el mes de "<< m << "hay "<<d<<endl;
        }
        else
        {
            d = 28;
            cout << "En el anio "<<a<< "en el mes de "<< m << "hay "<<d<<endl;
        }
        break;
    default:
        break;
    }
    return 0;
}