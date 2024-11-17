#include <iostream>

using namespace std;

int main(){
    int n;
    double x,sp = 0, sn = 0, cp= 0 ,cn = 0 ;
    float pp,pn;
    do
    {
        cout <<"cantidad de numeros a ingresar : ";
        cin>>n;
    } while (n <=0);
    for (int i = 0; i < n; i++)
    {
        cout <<"Ingresar numeros : ";
        cin>> x;
        if (x > 0)
        {
            cp++;
            sp +=x;
        }
        else if (x < 0)
        {
            cn++;
            sn += x;
        }
    }
    if (cp>0)
    {
        pp = (float)sp/cp;
        cout<<"El promedio es : " <<pp<<endl;
    }
    else
    {
        cout<<"No se ingresaron numeros positivos"<<endl;
    }
    if (cn>0)
    {
        pn = (float)sn/cn;
        cout<<"El promedio es : "<<pn<<endl;
    }
    else
    {
        cout<<"No se ingresaron numeros negativos"<<endl;
    }
    
    return 0 ;
}