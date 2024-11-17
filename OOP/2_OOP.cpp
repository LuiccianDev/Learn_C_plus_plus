#include <iostream>
using namespace std;
class Employee {
public:
    string Name ;
    string Company;
    int Age;

    

    void IntroduceYourself (){
        cout << " Name - "<<Name<<endl;
        cout << " Comapny - "<<Company<<endl;
        cout << " Age - "<<Age<<endl;
    }
    Employee (string name , string company, int age){
        Name = name ;
        Company = company;
        Age = age;


    }
};
int main(){
    int number;
    Employee employee1 = Employee("William", "Y-tAnimation", 23);

    employee1.IntroduceYourself();


    Employee employee2 = Employee("Alyson", "Amazon", 25);
    employee2.IntroduceYourself();
    


    return 0;
}
