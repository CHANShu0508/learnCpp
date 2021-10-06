#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> dynaArr (4);
    dynaArr[0] = 23;
    dynaArr[1] = 3;
    dynaArr[2] = 25;
    dynaArr[3] = 34;
    cout << "The length of the \'dynaArr\' is " << dynaArr.size() << endl;

    //dynamic add the length
    int newValue = 0;
    cout << "Type a new value: ";
    cin >> newValue;
    dynaArr.push_back(newValue);
    cout << "After add, the length of the \'dynaArr\' is " << dynaArr.size() << endl;
    cout << "And the last element is " << dynaArr[4] << endl;

    return 0;
}
