#include <iostream>
//#include <string>
using namespace std;

int main()
{
    int usrNum;
    string usrStr;

    cout << "Please type your name: ";
    cin >> usrStr;
    cout << "Please type a number: ";
    cin >> usrNum;

    cout << usrStr << " types " << usrNum;

    return 0; 
}
