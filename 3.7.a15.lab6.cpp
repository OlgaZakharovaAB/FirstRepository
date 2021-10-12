#include <iostream>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a;
    b = a*a; // x2
    c = b*a; // x3
    a = c*c; // x6
    b = a*a; // x12
    a = c*b; // x15
    cout << a;

    return 0;
}
