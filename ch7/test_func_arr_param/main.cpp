/*
 * Output of this program:
 * 0x61ff00
 * 0x61ff00
 * 0x61ff00
 * 0x61ff00
 * 
 * So, parameter is an array, it's essense is pointer
*/

#include <iostream>
using namespace std;

int TestFunction(int aArray[]);

int main()
{
    int here[] = {1, 2, 3, 4};
    cout << here << endl;
    cout << &here[0] << endl;

    TestFunction(here);

    return 0;
}

int TestFunction(int aArray[])
{
    cout << aArray << endl;
    cout << &aArray[0] << endl;

    return 0;
}
