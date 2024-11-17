#include <iostream>

using namespace std;

int main(){
    float notas[6] = {14,16.7,17,11,14,34};

    for (int i = 0; i < 6; i++)
    {
        if (notas[i] >= 14)
        {
            cout <<notas[i]<< " Aprobado"<<endl;
        }
        else
        {
            cout <<notas[i]<< " Desaprobado" <<endl;
        }
        
    }
    
    return 0;
}