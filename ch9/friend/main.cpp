#include <iostream>
using namespace std;

class Human {
private:
    friend string GetHumanName(const Human& man);
    friend class Dog;
    string name;

public:
    Human(const string str) : name(str) {}
};

class Dog {
public:
    void BarkOutHostName(const Human& man) {
        cout << "Name of my host is " << man.name << endl;
    }
};

string GetHumanName(const Human& man) { return man.name; };

int main()
{
    Human fei("Wang");
    cout << "The name of this man is " << GetHumanName(fei) << endl;

    Dog dog;
    dog.BarkOutHostName(fei);

    return 0;
}
