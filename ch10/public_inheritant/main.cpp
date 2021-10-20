#include <iostream>
using namespace std;

class Fish {
public:
    bool isSaltWater;

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

    return 0;
}
