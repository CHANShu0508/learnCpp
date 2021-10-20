#include <iostream>
using namespace std;

class Fish {
private:
    bool isSaltWater;

public:
    Fish(bool _isSalt) {
        cout << "Default fish constructor!" << endl;
    }
};

class Test {
protected:
    int hi = 0;
};

class Tuna : public Fish {
public:
    // Tuna() : Fish() { }

    void SetSalt() {
        // this->isSaltWater = false;  // member "Fish::isSaltWater" (declared at line 6) is inaccessibleC/C++(265)
    }
};

int main()
{
    // Tuna aTuna; // the default constructor of "Tuna" cannot be referenced -- it is a deleted function
    Test test;
    // test.hi = 9; //inaccessible

    return 0;
}
