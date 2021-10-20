#include <iostream>
using namespace std;

class Fish {
protected:
    bool isSaltWater;

public:
    void Swim() {
        if (isSaltWater)
            cout << "Swim in the sea." << endl;
        else
            cout << "Swim in the river." << endl;
    }
};

class Tuna : public Fish {
public:
    Tuna() {
        isSaltWater = true;
    }
};

int main()
{
    Tuna tuna;
    tuna.Swim();

    // tuna.isSaltWater = false;  // Wrong!! Member is not accessible

    return 0;
}
