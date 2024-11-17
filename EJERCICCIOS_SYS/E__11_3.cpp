#include <iostream>
#include <string.h>
#include <sstream>

using namespace std;

#define MAX 50
void CadenaLonguitud (char * nombre){
    int len = strlen(nombre);
    cout << nombre << " : " << len << endl;
    
}
void MostraLen ( const string & texto){
    istringstream stream(texto);
    string palabra ;
    while ( stream >> palabra)
    {
        cout << palabra << " : " <<palabra.length() << endl;
    }
    
}
int main(void)
{
    /* char nombre[MAX] ;
    cout << "Ingrese una cadena : ";explicacion del ciclo 
    cin.getline(nombre, MAX);
    CadenaLonguitud(nombre);
     */
    string texto ;
    cout << "Ingrese texto : ";
    getline(cin, texto);

    MostraLen(texto);



return 0;
}