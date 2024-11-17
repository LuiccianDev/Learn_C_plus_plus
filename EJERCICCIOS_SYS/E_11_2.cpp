#include <iostream>
#include <string.h>

using namespace std;

void CadenaEco (char *cadena, int n){
    int i = strlen(cadena);
    if (i > 0)
    {
        char UltimaLetra = cadena[i - 1];
        for (int j = 0; j < n; j++)
        {
            cadena[i + j] = UltimaLetra;

        }
        cadena[ i + n ] = '\0';
    }
}

int main(void)
{
    char cadena[] = "William" ;
    CadenaEco(cadena, 3);
    cout << "Cadena Eco : " << cadena << endl;
    

    return 0;
}