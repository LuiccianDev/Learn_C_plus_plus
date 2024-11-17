#include <iostream>

using namespace std;

int main(){
    int i ,sp = 0 , si = 0;
    for (int i = 0; i <= 50; i++)
    {
        if (i%2 == 0 ){
            sp += i;
        }
        else{
            si +=i;
        }
    }
    cout << "a suma de numeros pares son : " << sp<<endl;
    cout << "a suma de numeros impares son : " << si<<endl;


    return 0 ;
}