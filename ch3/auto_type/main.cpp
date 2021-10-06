#include <iostream>
using namespace std;

int main()
{
    auto boolType = false;
    auto llInteger = 10000000000;
    cout << "\'boolType\' is " << sizeof(boolType) << " bytes" << endl;
    cout << "\'llInterger\' is " << sizeof(llInteger) << " bytes" << endl;

    return 0;
}
