#ifndef PESSOA_H
#define PESSOA_H
#include <string>

using namespace std;

class Person {
private:
    string name;
    int birthYear;
public:
    //Default Constructor
    Person();

    //Constructor with parameters
    Person(string name, int birthyear);

    //Method for calculating age
    int calculateAge() const;

    //getters
    string getName() const;
    int getBirthYear() const;
};

#endif //PESSOA_H