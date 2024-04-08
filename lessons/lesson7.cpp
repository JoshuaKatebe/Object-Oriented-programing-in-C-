//Hierarchical
#include <iostream>
// Base Class
    class Animal{
    public:
        void move() const{
            std::cout << "Animal is moving." << std::endl;
        }
    };

// Derived Class1
class Dog : public Animal{
public:
    void bark()const{
        std::cout << "Dog is barking" << std::endl;
    }
};
//Derived Class2
class Cat : public Animal{
public:
    void meow() const{
        std::cout << "Cat is meowing" << std::endl;
    }
};


int main(){

    Dog dog;
    dog.move();
    dog.bark();

    Cat cat;
    cat.move();
    cat.meow();    

    return 0;
}