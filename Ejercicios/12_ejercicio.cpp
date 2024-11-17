#include <iostream>

using namespace std;

int main(){
    double ang1 , ang2, ang3 ;
    cout << "Ingrese el angulo 1 : ";
    cin>> ang1;
    cout << "Ingrese el angulo 2 : ";
    cin>> ang2;
    cout << "Ingrese el angulo 3 : ";
    cin>> ang3;
    if ( ang1 + ang2 + ang3 == 180){
        if (ang1 == 90 ||ang2 == 90 || ang3 == 90 ){
            cout << "Elk triangulo es rectangulo" << endl;
            }
        else if (ang1 > 90|| ang1 > 90 || ang3 > 90){
            cout <<" El triangulo es  obtusangulo"<<endl;
            }
        else{
            cout<<"El trinagulo es acutangulo"<<endl;
            }
        }
    else{
        cout << "Los angulos no forman un triangulo"<<endl;
    }

    return 0 ;
}