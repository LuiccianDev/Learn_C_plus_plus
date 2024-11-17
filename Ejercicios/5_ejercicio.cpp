#include <iostream>
#include <cstdio>

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número entero
    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    // Verificar si el número es par o impar
    if (numero % 2 == 0) {
        printf("El numero %d es par.\n", numero);
    } else {
        printf("El numero %d es impar.\n", numero);
    }

    return 0;
}
