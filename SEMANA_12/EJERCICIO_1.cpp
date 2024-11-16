#include <iostream>

using namespace std;

int main(void)
{
    //* Declarar una array o matrix

    /* tipo_dato identificador[filas][columnas] */
    float array[2][2] = {{1,2},{4,6}};
    float mayor = array[0][0];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (array[i][j] < mayor)
            {
                continue;
            }
            else
            {
                mayor = array[i][j];
            }
            
        }

    }
    cout << "El numero mayor es : " << mayor << endl;

    return 0;
}