#include <iostream>
#include <string>

using namespace std;

void Ateriscos_nichi(string & T, int a, int b) {
    string aterisco, nichi;

    // Agregar asteriscos según a
    for (size_t i = 0; i < a; i++) {
        aterisco += "*"; // Agrega un asterisco
    }

    // Agregar hashtags según b
    for (size_t j = 0; j < b; j++) {
        nichi += "#"; // Agrega un hashtag
    }
    
    // Concatenar las cadenas y asignar a T
    T = aterisco + " " + T + " " + nichi;
}

int main(void) {
    string T = "What is up ?";
    Ateriscos_nichi(T, 5, 3); // Llama a la función
    cout << "El nuevo texto es : " << T << endl; // Muestra el resultado
    
    return 0;
}
