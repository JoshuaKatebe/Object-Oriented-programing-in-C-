//Double inheritance
#include <iostream>

// Base class 1
class Fish {
public:
    void swim() const {
        std::cout << "Fish is swimming." << std::endl;
    }
};

// Base class 2
class Bird {
public:
    void fly() const {
        std::cout << "Bird is flying." << std::endl;
    }
};

// Derived class
class FlyingFish : public Fish, public Bird {
public:
    void action() const {
        swim(); // Calls function from Fish
        fly();  // Calls function from Bird
    }
};

int main() {
    FlyingFish flyingFish;
    flyingFish.action(); 

    return 0;
}