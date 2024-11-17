#include <iostream>
#include <tuple>
#include <array>
#include <vector>
#include <list>

using namespace std;

//*Formas para pasar un array a una function pero necesita 2 parametros uno es el array y optrao el tamano
/*void array_n(int* array, size_t size) {
    cout << "Tamaño del array: " << size << " elementos" << endl;
}*/
//* Se paasar como punetero pero se debe indicar el tamno como se ce ne la fuuncion
/* void array_n(int (&array)[5]) {
    cout << "Tamaño del array: " << sizeof(array) / sizeof(array[0]) << " elementos" << endl;
} */
//*Se utilza la biblioteca vector y también se denbbe decalra el tamanno como se nota en la fncion
/* #include <array>

void array_n(const std::array<int, 5>& array) {
    cout << "Tamaño del array: " << array.size() << " elementos" << endl;
}
 */


//* Pasar un array a un función 
void array_n (int array[], size_t a ){
    cout << a <<endl;//? no se puede pasar y utliza run array ya que lo pasa como puntero
};

int main(void)
{
    //todo Para crear y acceder a una array y es mas facil acceder a los valores
    int guess[5] = {10, 13, 15, 17, 20};
    cout << guess[3] <<endl;
    guess[4] = 34; //*Se pude cambiar 
    array_n(guess, sizeof(guess)/sizeof(guess[0]));

    //! "sizeof" indica en tama;o en bytes de guess ,int = 4 bytes -> 4*5 = 20 , 20 /4 = 5 -> tamano del array
    int size = sizeof(guess)/sizeof(guess[0]);//* Hallar el tamano del guess
    cout<< size <<endl;

    //todo Para crear y acceder a una tupla
    std::vector<int> vectores;
    vectores.push_back(1);
    vectores.push_back(3);
    vectores.push_back(4);

    //todo Para crear y acceder a una lista
    std::list<int> mylist ;
    mylist.push_back(1);
    mylist.push_back(3);
    mylist.push_back(4);

    //todo Para crear y acceder a un tupla 
    std::tuple<int, double, string> tuples(1, 2.56, "hola");
    int a = std::get<0>(tuples); //* Acceder con tuplas 
    int b = std::get<1>(tuples); 

    return 0;
}