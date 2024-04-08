//Hybrid(Virtual Inheritance)
#include <iostream>
//Base Class
class Car {
public:
    void drive() const{
        std::cout << "Car is being driven" << std::endl;
    }
};

//Base class2
class Aircraft{
public:
    void fly()const {
        std::cout << "Aircraft is flying" << std::endl;
    }
};

//Derived class
class FlyingCar : virtual public Car, virtual public Aircraft{
public:
    void action()const{
        drive();
        fly();
    }
};



int main(){
    FlyingCar flyingCar;
    flyingCar.action();

    return 0;
}