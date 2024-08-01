#include "person.h"
#include <ctime>

//default constructor
Person::Person() : name(""), birthYear(birthYear) {}

//Constructor with parameters
Person::Person(string name, int birthYear) : name(name), birthYear(birthYear) {}

//Method for calculating age
int Person::calculateAge() const {
    //get the current
    time_t t = time(0);
    struct tm* now = localtime(&t);
    int currentYear = now->tm_year + 1900;
        
    return currentYear - birthYear;
}

//getters
string Person::getName() const {
    return name;
}

int Person::getBirthYear() const {
    return birthYear;
}