#include <iostream>
using namespace std;

int main()
{
    int* integer = new int [3];
    double* doubleNums = new double [3];

    cout << "Address of integer array: " << hex << integer << endl;
    cout << "Address of double array: " << hex << doubleNums << endl << endl;

    cout << "Address of integer++: " << hex << ++integer << endl;
    cout << "Address of double++: " << hex << ++doubleNums << endl << endl;

    cout << "Address of integer + 1: " << hex << (--integer) + 1 << endl;
    cout << "Address of double + 1: " << hex << (--doubleNums) + 1 << endl;

    delete[] integer;
    delete[] doubleNums;

    return 0;
}
