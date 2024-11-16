#include <iostream>

using namespace std;

//* Class - describes the estructure
//* object - a specific example of that structure
//* instance ' another name for object
//* instantianting
//* data members - variables
//* methods - functions

//* Abstraccion - A concep where you make something easy by hiding the complicated stuff
//* Encapsulation - granting acces to private data only through controlled public interface
//* Inherence - we can create derived classes that inherit properties from their paren classes
//* Polymorphism - we can theat multiple diffrente objects as their base object type

class P {
    private:
        string name;
        int age;
    public:
        void print (){ std:: cout <<name << "\t"<< age <<std::endl;}
};
int main(void)
{
    
return 0;
}