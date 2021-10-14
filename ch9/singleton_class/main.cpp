#include <iostream>
using namespace std;

class President {
private:
    President() {}; // private default constructor
    President(const President&) {}; // private default copy constructor
    const President& operator=(const President&); // assigin operator

    string name;

public:
    static President& GetInstance() {
        static President onlyInstance;
        return onlyInstance;
    }

    string GetName() {
        return name;
    }

    void SetName(string InputName) {
        name = InputName;
    }
};

int main()
{
    President& onlyPresident = President::GetInstance();
    onlyPresident.SetName("Mao");

    // President& hello = onlyPresident; // OK!! Another reference
    // President hello2 = onlyPresident; // No!! Copy is private

    cout << "The name of the only president is " << onlyPresident.GetName() << endl;

    return 0;
}
