#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {23, 57, 299, 409};
    
    // for (int index : numbers) {
    for (auto index : numbers) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}
