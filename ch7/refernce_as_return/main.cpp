#include <iostream>
#include <cmath>
using namespace std;

void GetArea(double radius, double& result);

int main()
{
    cout << "Enter the radius: ";
    double rad = 0, area;
    cin >> rad;
    GetArea(rad, area);

    cout << "The area of the " << rad << " radius circle is " << area << endl;

    return 0;
}

void GetArea(double radius, double& result)
{
    result = M_PI * radius * radius;
}
