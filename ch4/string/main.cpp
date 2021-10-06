#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstStr ("Hello, C++ style string!");
    cout << firstStr << endl;

    string secondStr ("My name is");
    string thirdStr ("Jack");
    string fourthStr = secondStr + " " + thirdStr;
    cout << fourthStr << endl;
    cout << "Length of secondStr is " << secondStr.length() << endl;
    cout << "Length of thirdStr is " << thirdStr.length() << endl;
    cout << "Length of fourthStr is " << fourthStr.length() << endl << endl;

    cout << "Size of secondStr is " << secondStr.size() << endl;
    cout << "Size of thirdStr is " << thirdStr.size() << endl;
    cout << "Size of fourthStr is " << fourthStr.size() << endl;

    return 0;
}
