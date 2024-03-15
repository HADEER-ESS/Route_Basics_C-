#include<iostream>
using namespace std;

//Q1
/*
class Animal{

protected:
    string name;

public:
    //Constructor
    Animal(string name): name(name){}

    //Method
    //Abstract Method
    virtual void greets() = 0;
};


class Cat : public Animal{

public:
    //Constractor
    Cat(string name) : Animal(name) {}

    //Method
    void greets(){
        cout << "Meaow" << endl;
    }

};


class Dog : public Animal{

public:
    //Constructor
    Dog(string name) : Animal(name){}

    //Methods
    void greets(){
        cout << "Woof" << endl;
    }

    void greets(Dog pets){
        cout << "Woooof" <<endl;
    }

};


class BigDog : public Dog{

public:
    //Constructor
    BigDog(string name) : Dog(name) {}

    //Method
    void greets(){
        cout <<  "WoooW" << endl;
    }

    void greets(Dog pets){
        cout << "WooooooW" << endl;
    }

    void greets(BigDog bigPets){
        cout << "WoooooooooW" << endl;
    }
};


int main(){

    Cat c = Cat("Zed");

    c.greets();

    BigDog bd = BigDog("Kel");

    Dog d = Dog("Loy");

    bd.greets();

    bd.greets(bd);

    bd.greets(d);

}

*/

//===================================================================================================================

//Q2

class Vehicel{

protected:
    string model, registeredNumber;
    int speed;
    double capacity, consumption;

public:
    //Constructor
    Vehicel(string model, string registeredNumber, int speed, double capacity, double consumption) :
        model(model), registeredNumber(registeredNumber), speed(speed), capacity(capacity), consumption(consumption){}
    
    virtual void display() = 0;
    
};

class Truck : public Vehicel{

private:
    double cargoLimit;

public:
    //Constructor
    Truck(string model, string registeredNumber, int speed, double capacity, double consumption, double cargoLimit) :
        cargoLimit(cargoLimit), Vehicel(model, registeredNumber, speed, capacity, consumption){}
    
    //Setters
    void set_cargo_limit(double limit){
        cargoLimit = limit;
    }

    //Getters
    double get_cargo_limit(){
        return cargoLimit;
    }

    //Method
    void display () {
        cout << "Model : " << Vehicel::model << endl
             << "Registered Number : " << Vehicel::registeredNumber <<endl
             << "Speed : " << Vehicel::speed <<endl
             << "Capacity : " << Vehicel::capacity << endl
             << "Consumption : " << Vehicel::consumption << endl
             << "Cargo LimitL : " << cargoLimit << endl;
    }
};

class Bus : public Vehicel{

private:
    int passengers;

public:
    //Constructor
    Bus(string model, string registeredNumber, int speed, double capacity, double consumption, int passengers):
        passengers(passengers), Vehicel(model, registeredNumber, speed, capacity, consumption){}

    //Setters
    void set_passendgers_number(int passengers){
        this->passengers = passengers;
    }

    int get_passengers_number(){
        return passengers;
    }

    //Method
    void display(){
        cout << "Model : " << Vehicel::model << endl
             << "Registered Number : " << Vehicel::registeredNumber <<endl
             << "Speed : " << Vehicel::speed <<endl
             << "Capacity : " << Vehicel::capacity << endl
             << "Consumption : " << Vehicel::consumption << endl
             << "Passengers Number : " << passengers << endl;
    }
};

int main(){

    Truck t("ssp" , "77f" , 1005 , 400 , 100 , 7);

    Bus b("tot" , "92l" , 5000 , 600 , 333 , 20);

    t.display();
    
    cout << "===================================" << endl ;
    
    b.display();
}
