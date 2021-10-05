#include <iostream>

int main()
{
    int integer{1000};

    //OK, begin our test!
    char charTest{integer};  //warning: narrowing conversion of 'integer' from 'int' to 'char' inside { } [-Wnarrowing]
    float floatTest{integer};  //warning: narrowing conversion of 'integer' from 'int' to 'float' inside { } [-Wnarrowing]
    long int longTest{integer};
    char charTest2{12};
    float floatTest2{1000};

    double variable = 100.0f;
    float floatTest3{variable};  //narrowing conversion of 'variable' from 'double' to 'float' inside { } [-Wnarrowing]

    return 0;
}
