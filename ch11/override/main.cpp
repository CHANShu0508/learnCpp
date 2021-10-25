#include <iostream>
using namespace std;

class Fish {
public:
    virtual void Swim() {
        cout << "Fish can swim" << endl;
    }
};

class Tuna : public Fish {
public:
    void Swim() const override {  // member function declared with 'override' does not override a base class member
        cout << "Tuna can swim" << endl;
    }
};

int main()
{
    Tuna tuna;

    return 0;
}
