#include <iostream>
#include "person.cpp"

using namespace std;

int main () {
    Person person1("John", 2001);
    Person person2("Christopher", 1998);
    Person person3("Kurt", 2000);

    cout << "Name: " << person1.getName() << "\n" << "Age: " << person1.calculateAge() << " yo" << endl;
    cout << "Name: " << person2.getName() << "\n" << "Age: " << person2.calculateAge() << " yo" << endl;
    cout << "Name: " << person3.getName() << "\n" << "Age: " << person3.calculateAge() << " yo" << endl;

    return 0;
}