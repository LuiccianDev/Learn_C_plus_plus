#include <iostream>
#include <vector>

using namespace std;

void AgreagarExpacios ( string &texto ){
    string resultado ; // cadena pora almcenar resultados 
    for ( char c : texto){
        resultado += c; // agregar el caracrter  a la cadena actual 
        resultado += ' ';// Agregar un espacio

    }
    //Eliminar el ultimo espacio agregado
    if (!resultado.empty())
    {
        resultado.pop_back(); //* Quitar el ultimo espacio 
    }
    texto = resultado; //* Cadena o texto modificado
}

int main(void)
{
    string texto = "Hola   ";
    AgreagarExpacios(texto);
    cout << "El texto Modificado es : " << texto <<endl;
    /* string texto = "Hola mundo";

    vector <char> Caracteres ; 
    for (char c : texto)
    {
        Caracteres.push_back(c);  

    }
    for (size_t i = 0; i < Caracteres.size(); i++)
    {
        cout<< "Caracter " << i << " : " << Caracteres[i] << endl;

    } */
    

return 0;
}