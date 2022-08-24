#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "Hello World!";
    cout << "\n";
    cout << sqrt(16);
    cout << "\n";

    cout << "\nVariables sumetion = ";
    int a = 3;
    int b = 3;
    int sum = a + b;
    cout << sum;
    cout << "\n";

    cout << "\nData type";
    cout << "\n char, int, float, double, bool\n";
    char n = 'M';
    cout << "charecter ASCI value: " << (int)n << endl;
    double d = 4.6;
    bool b1 = true;
    bool b2 = false;
    cout << "Char print = " << n << "\nPrint double value = " << d << "\nBoolian value = " << b1 << "," << b2 << endl;
    //long int, long long int

    cout << "\nDiscuss about Arithmatic c++ operator\n";
    // c++ operators = +, -, *, /, %, ++, --
    //'%' vhagsesh ba reminder print kore

    cout << "\nDiscuss about Relational c++ operator\n";
    // c++ relational operator ==, !=, <, >, <=, >=

    cout << "\nInput\n";
    int r;
    char c;
    double t;
    cin >> r >> c >> t;
    cout << "\nInteger input= " << r << "\nCharecter input= " << c << "\nDouble input= " << t << endl;

    //Remember about ++a, a++, a--, --a and any number also charecter, like 5 also a cherecter

    
    return 0;
}
