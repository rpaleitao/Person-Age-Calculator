# Person Age Calculator
This project is a simple C++ application that demonstrates the use of classes, constructors, and methods to manage and compute data related to a person, such as their age based on the current year. The project is split into separate files for better organization and maintainability.

PROJECT STRUCTURE
The project consists of the following files:

  - person.h: This header file contains the definition of the Person class, including its private members, constructors, and public methods.
  - person.cpp: This implementation file contains the definitions of the methods declared in the Person class.
  - main.cpp: This file contains the main function, where instances of the Person class are created and used to demonstrate the functionality of the class.

CLASS PERSON
The Person class has the following features:

  - Private Members:
    - string name: Stores the name of the person.
    - int birthYear: Stores the birth year of the person.

  - Constructors:
    - Default constructor to initialize an empty person.
    - Parameterized constructor to initialize a person with a given name and birth year.

  - Public Methods:
    - int calculateAge() const: Calculates the age of the person based on the current year.
    - string getName() const: Returns the name of the person.
    - int getBirthYear() const: Returns the birth year of the person.

HOW IT WORKS
In the main.cpp file, we create multiple instances of the Person class with different names and birth years. We then use the calculateAge method to compute and display the age of each person.
