#include <iostream>
using namespace std;
class Employee {
public:
    string Name ;
    string Campany;
    int Age;

    void IntroduceYourself (){
        cout << " Name - "<<Name<<endl;
        cout << " Comapny - "<<Campany<<endl;
        cout << " Age - "<<Age<<endl;
    }
};
int main(){
    int number;
    Employee employee1 ;
    employee1.Name = "William";
    employee1.Campany = "Y-t Animation";
    employee1.Age = 24;
    employee1.IntroduceYourself();


    Employee employee2 ;
    employee2.Name = "David";
    employee2.Campany = "None";
    employee2.Age = 25;
    employee2.IntroduceYourself();



    return 0;
}