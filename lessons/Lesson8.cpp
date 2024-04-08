//Multilevel Inheritance
#include <iostream>

//Base class
class Vehicle{
public:
    void drive() const{
        std::cout << "Vehicle is being driven" << std::endl;
    }
};

//Derived Class1
class Car : public Vehicle{
public:
    void honk() const{
        std::cout << "Car is honking" << std::endl;
    }
};

//Derived Class2
class SportsCar : public Car{
public:
    void accelerate() const{
        std::cout << "Sports car is accelerating" << std::endl;
    }
};

int main(){

    SportsCar sportsCar;
    sportsCar.drive();
    sportsCar.honk();
    sportsCar.accelerate();

    return 0;
}