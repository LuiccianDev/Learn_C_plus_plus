#include <iostream>

using namespace std;

int main(){
    char letra ;
    cout <<"Ingrese una leta desde el 'a' hasta 'e' : " ;
    cin >>letra;
    switch (letra)
    {
    case 'a': cout<<"Exelente"<<endl;break;
    case 'b': cout<<"Bueno"<<endl;break;
    case 'c': cout<<"Regular"<<endl;break;
    case 'd': cout<<"Malo"<<endl;break;
    case 'e': cout<<"Pesimo"<<endl;break;


    default:
        break;
    }

    return 0 ;
}