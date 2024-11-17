#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Cartesina {
    public:
        double x;
        double y;
        Cartesina( double v, double k) : x(v), y(k){};
        double Magnitud ();
};
double Cartesina::Magnitud (){
    return sqrt((this->x * this->y));
}
int main(void)
{
    Cartesina cart(3.4,5.6) ;
    //* Agrgar os valore al objeto
    /* cart.emplace_back(3.6,5.7) */
    cart.Magnitud();

return 0;
}