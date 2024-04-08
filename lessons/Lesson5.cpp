//single Inheritance
#include <iostream>

// Base class
class Animal {
public:
    void eat() const {
        std::cout << "Animal is eating." << std::endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() const {
        std::cout << "Dog is barking." << std::endl;
    }
};

int main() {
    Dog dog;
    dog.eat();  // Calls function from base class
    dog.bark(); // Calls function from derived class

    return 0;
}