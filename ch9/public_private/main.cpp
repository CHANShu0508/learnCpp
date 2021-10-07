#include <iostream>
using namespace std;

class Person {
    private:
        int age;

    public:
        string name;
        void SetAge(int num) {
            age = num;
            //this->age = num;
        };
        int ShowAge() {
            return age;
        };
};

int main()
{
    Person Jack;
    Jack.name = "Jack";
    Jack.SetAge(23);

    cout << Jack.name << " is " << Jack.ShowAge() << " years old." << endl;

    return 0;
}
