#include <iostream>
using namespace std;

// overloading functions:
double exponent(double base);
double exponent(double base, double exp);

int main()
{
    cout << "One parameter: " << exponent(5) << endl;
    cout << "Two parameters: " << exponent(5, 3) << endl;

    return 0;
}

double exponent(double base)
{
    return base * base;
}

double exponent(double base, double exp)
{
    double result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }

    return result;
}
