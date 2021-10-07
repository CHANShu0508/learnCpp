#include <iostream>
using namespace std;

class Person {
    private:
        int age;

    public:
        string name;

        Person(string str = "Name", int num = 0)
               :name(str), age(num) {
            cout << "Here is a object created!" << endl;
        }

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
    Person Jack ("Jack", 23);
    Jack.SetAge(24);

    cout << Jack.name << " is " << Jack.ShowAge() << " years old." << endl;

    return 0;
}
