#include <iostream>
#include <string.h>
using namespace std;

class MyString {
    private: 
        char* buffer;  // store the pointer of the data

    public:
        // Constructor
        MyString(const char* initString) {
            buffer = NULL;
            if (initString != NULL) {
                buffer = new char [strlen(initString) + 1];
                strcpy(buffer, initString);
            }
        }

        // Copy constructor
        MyString(const MyString& copySource) {
            buffer = NULL;
            if (copySource.buffer != NULL) {
                buffer = new char [strlen(copySource.buffer) + 1];
                cout << "Copy constructor working at " << hex << (int*)buffer << endl;
                strcpy(buffer, copySource.buffer);
            }
        }

        // Move constructor
        MyString(MyString&& moveSource) {
            if (moveSource.buffer != NULL) {
                buffer = moveSource.buffer; // just move it
                cout << "Move constructor working at " << hex << (int*)buffer << endl;
                moveSource.buffer = NULL; // reason why there is no const
            }
        }

        // Destructor
        ~MyString() {
            cout << "Invoking destructor, clearing up at " << hex << (int*)buffer << endl;
            delete [] buffer;
        }

        int GetLength() { return strlen(buffer); }
        const char* GetString() { return buffer; } 
};

void UseString(MyString str)
{
    cout << "Length of the string is: " << str.GetLength() << endl;
    cout << "The content of the string is: " << str.GetString() << endl;

    return;
}

MyString CopyString(MyString& str)
{
    MyString copyFromReturn(str.GetString());
    return copyFromReturn;
}

int main()
{
    MyString hello("Hello, object oriented programming!");
    MyString helloAgain(CopyString(hello));
    // UseString(hello);

    return 0;
}
