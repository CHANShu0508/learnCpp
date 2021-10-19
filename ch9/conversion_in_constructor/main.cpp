#include <iostream>
using namespace std;

class Human {
public:
    int age;
    explicit Human(int num) : age(num) {
        // empty
    }
};

void DoSomething(Human man)
{
    cout << "Human aged " << man.age << endl;
}

int main()
{
    // explicit conversion
    Human fei(10);
    DoSomething(fei);

    // inexplicit conversion 
    // Human wang = 11;
    // DoSomething(wang);
    
    // inexplicit conversion 
    // DoSomething(12);

    return 0;
}
