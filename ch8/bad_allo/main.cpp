#include <iostream>
using namespace std;

int main()
{
    int* manyNums;

    //first method
    try {
        manyNums = new int [0x1fffffff];
        delete[] manyNums;
    } catch (bad_alloc) {
        cout << "bad alloc" << endl;
    }

    //second method
    // manyNums = new(nothrow) int [0x1fffffff];
    // if (manyNums) {
    //     delete[] manyNums;
    // } else {
    //     cout << "bad alloc" << endl;
    // }

    return 0;
}
