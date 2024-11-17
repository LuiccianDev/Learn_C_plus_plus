#include <iostream>
#include <math.h>

using namespace std;

int main() {
    const double G = 9.8;
    double T,H;

    cout << "Ingrese el tiempo en segundos : ";
    cin >> T;
    H = G*0.5*pow(T,2);
    cout << "La altura en "<<T<<" s es : "<<H<<endl;
    return 0;
    

}