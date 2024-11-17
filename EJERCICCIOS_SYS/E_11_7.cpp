#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Cliente
{
    int codigo ;
    string nombre;
    double salario;
};

int main(void)
{ 
    int n ; 
    cout << "Ingrese el numero de clientes ";
    cin >> n ;

    if (n <= 0 )
    {
        cout << "El numero de clinetes debre ser positivo " <<endl;

        return 1 ; 
    }
    std::vector<Cliente> clientes(n);

    for (int i = 0; i < n; i++)
    {
        std::cout << "Ingrese el codigo del cliente " << (i + 1) <<" : ";
        std::cin >> clientes[i].codigo ;
        std::cin.ignore() ;

        std::cout << "Ingrese el nombre del clinete " << (i + 1) <<" : ";
        std::getline(std::cin, clientes[i].nombre);

        std::cout << "Ingrese el saldo del cliebnte " << ( i + 1) <<" : ";
        std::cin >> clientes[i].salario;


    }
    for (const auto & cliente : clientes)
    {
        cout <<" Codigo : " << cliente.codigo 
            << ", Nombre : " << cliente.nombre
            << ", Saldo : " << cliente.salario;
    }
    
return 0;
}