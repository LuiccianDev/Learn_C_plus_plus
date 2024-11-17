#include <iostream>
using namespace std;
class Employee {
private:
    string Name ;
    string Company;
    int Age;

public:
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        if (age >=18) 
        Age = age;
    }
    int getAge(){
        return Age;
    }   
    
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
    employee1.setAge(39);
    
    cout<< employee1.getAge() <<" is "<<employee1.getAge()<<" year old" <<endl;


    return 0;
}