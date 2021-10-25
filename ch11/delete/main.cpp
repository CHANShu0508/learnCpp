#include <iostream>
using namespace std;

class Fish {
public:
    Fish() {
        cout << "Fish constructor" << endl;
    }
    virtual ~Fish() {
        cout << "Fish destructor" << endl;
    }
};

class Tuna : public Fish {
public:
    Tuna() {
        cout << "Tuna constructor" << endl;
    }
    ~Tuna() {
        cout << "Tuna destructor" << endl;
    }
};

void DeleteFish(Fish* _fish) {
    delete _fish;
}

int main()
{
    cout << "---- Allocate memory to Tuna ----" << endl;
    Tuna* pTuna = new Tuna;

    cout << "---- Delete memory ----" << endl;
    DeleteFish(pTuna);

    return 0;
}
