#include <iostream>
using namespace std;

class HugeDB {
private:
    ~HugeDB() {}; // private destructor

public:
    static void DestroyInstance(HugeDB* pInstance) {
        delete pInstance;
    }

    //other memmbers
};

int main()
{
    //HugeDB object;  //Not allowed!! It's on stack
    HugeDB* pObject = new HugeDB(); //OK! It's on heap

    //delete pObject;  //Not allowed!! Destructor is private
    HugeDB::DestroyInstance(pObject); //Right way to delete

    return 0;
}
