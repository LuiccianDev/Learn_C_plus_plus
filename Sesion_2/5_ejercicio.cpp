#include <iostream>

using namespace std;

int main(){
    float x, y, z ;
    cout << " x : ";
    cin >> x;
    cout << "y : ";
    cin>>  y;
    cout << "z : ";
    cin >> z;

    if ((x > 0) && (y > 0) && (z > 0))
    {
        if (((x + y) > z) && ((x + z) > y ) && ((z + y) > x) )
        {
            cout << "Es un trinagulo";
        }
        else
        {
            cout<< "No es un Triangulo";
        }
        
    }
    else{
        cout<<"Un valor es negativo";
    }



    return 0 ;
}