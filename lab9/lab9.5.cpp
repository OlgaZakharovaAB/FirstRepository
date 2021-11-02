#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a;
    double d;
    cin >> a;
    d = double(a)/100;
    a = ceil(d);
    cout << a;
    return 0;
}
