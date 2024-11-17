#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int numero = 234565;
    string num_caracter = to_string(numero);

    vector<int> num;

    for (char i : num_caracter)
    {
        num.push_back(i - '0');
    }
    cout << "Los digttos son: "<< endl;
    for (int digito : num){
        cout << digito <<endl;
    }
    cout<< endl;
    return 0 ;
}