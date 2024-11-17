#include <iostream>
using namespace std;

int main(){
    string nombre = "Jorge";
    string  contra = "coco";

    string E_nombre, E_contra;
    cout << "Ingrese el nombre: ";
    cin >> E_nombre;
    cout << "Ingrese la contrasenio: ";
    cin >> E_contra;
    if (E_nombre == nombre && E_contra == contra)
    {
        cout<<"Inicio de sesion correcta usuario "<< nombre <<" ! "<<endl;
    }
    else
    {
        cout<<"Inicio de sesion incorrecta "<< " ! "<<endl;
    }
        
}