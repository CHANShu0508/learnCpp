#include <iostream>
using namespace std;

class Fish {
protected:
    bool isSaltWater;

public:
    Fish(bool _isSalt) : isSaltWater(_isSalt) { }

    void Swim() {
        if (isSaltWater)
            cout << "Swim in the sea." << endl;
        else
            cout << "Swim in the river." << endl;
    }

    void Swim(int _speed) {
        cout << "It swims " << _speed << " meters one second." << endl; 
    }
};

class Tuna : public Fish {
public:
    string color;

    Tuna(const string _str) : color(_str), Fish(true) { }

    using Fish::Swim;

    void Swim() {
        cout << "Well, the tuna is swimming." << endl;
    }
};

int main()
{
    Tuna tuna("blue");
    tuna.Swim();

    return 0;
}
