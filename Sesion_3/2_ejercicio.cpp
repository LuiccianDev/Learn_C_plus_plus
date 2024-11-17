#include <iostream>

using namespace std;

int main(){
    long num ;
    cout <<"Ingrese un numero : " ;
    cin >>num;
    switch (num)
    {
    case 2:case 5:case 8: 
        cout<<"El Cuadrado del numero es : "<<(num*num) << endl;break;
    case 4: case 7: case 9: 
        cout<<"El numero multiplicado por 5 "<<(num*4) << endl;break;
    default:
        break;
    }
    return 0 ;
}