#include <iostream>

using namespace std;

int main(){

    int n ;
    double x, sp = 0, p;
    do
    {
        cout<<"Cantidad de numeros a ingresar : ";
        cin>> n;
    } while (n<=0);
    for (int i = 1; i <= n; i++)
    {
        cout<< "Ingresa numero : ";
        cin>> x;
        sp += x;
    }
    p = sp/n;
    cout <<"El promedio de los "<<n<<" numeros son "<<p<<endl;
    return 0 ;
    
}