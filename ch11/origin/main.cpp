#include <iostream>
using namespace std;

class Fish {
public:
    // void Swim() {
    virtual void Swim() {
        cout << "Fish can swim" << endl;
    }
};

class Tuna : public Fish {
public:
    void Swim() {
        cout << "Tuna can swim" << endl;
    }
};

void LetItSwim(Fish* _fish)
{
    _fish->Swim();
}

int main()
{
    Tuna tuna;

    LetItSwim(&tuna);

    return 0;
}
