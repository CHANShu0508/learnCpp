#include <iostream>
using namespace std;

class FishDummy {
public:
    FishDummy() {
        cout << "FishDummy constructor" << endl;
    }
    ~FishDummy() {
        cout << "FishDummy destructor" << endl;
    }
};

class Fish {
protected:
    FishDummy dummy_fish;

public:
    Fish() {
        cout << "Fish constructor" << endl;
    }

    ~Fish() {
        cout << "Fish destructor" << endl;
    }
};

class TunaDummy {
public:
    TunaDummy() {
        cout << "TunaDummy constructor" << endl;
    }

    ~TunaDummy() {
        cout << "TunaDummy destructor" << endl;
    }
};

class Tuna : public Fish {
protected:
    TunaDummy dummy_tuna;

public:
    Tuna() {
        cout << "Tuna constructor" << endl;
    }

    ~Tuna() {
        cout << "Tuna destructor" << endl;
    }
};

int main() 
{
    Tuna tuna;

    return 0;
}
