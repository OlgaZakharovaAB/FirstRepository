#include <iostream>

using namespace std;

int main()
{
    double a, b, c, d;
    cout << "Введите А В С:" << endl;
    cin >> a >> b >> c;
    d = c;
    c = b;
    b = a;
    a = d;

    cout << "A = " << a << endl << "B = " << b << endl << "C = "  << c;
    return 0;
}