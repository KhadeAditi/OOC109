
#include <iostream>
using namespace std;

class Employee {
public:
    virtual double calculateBonus(double salary) {
        return 0;
    }
};

class Manager : public Employee {
public:
    double calculateBonus(double salary) override {
        return salary * 0.20;  // 20% bonus
    }
};

class Developer : public Employee {
public:
    double calculateBonus(double salary) override {
        return salary * 0.10;  // 10% bonus
    }
};

int main() {
    Manager m;
    Developer d;

    Employee *e;

    e = &m;
    cout << "Manager Bonus: " << e->calculateBonus(50000) << endl;

    e = &d;
    cout << "Developer Bonus: " << e->calculateBonus(50000) << endl;

    return 0;
}
