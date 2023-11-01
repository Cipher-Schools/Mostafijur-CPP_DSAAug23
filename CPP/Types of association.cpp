#include <bits/stdc++.h>
using namespace std;

class Department {
public:
    Department(const std::string& name) : name(name) {}
private:
    std::string name;
    // Other department-specific members
};

class University {
public:
    University(const std::string& name) : name(name) {}
private:
    std::string name;
    std::vector<Department*> departments; // Aggregation
};

// Instance can't exist without a Car instance
class Engine {
public:
    Engine(int horsepower){
        self->horsepower = horsepower;
    }
private:
    int horsepower;
    // Other engine-specific members
};

class Car {
public:
    Car(int year, const std::string& make) : engine(200) {} // Composition
private:
    Engine engine;
};