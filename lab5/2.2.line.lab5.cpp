#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    cout << abs(x1-x2) << abs(x1-x3) << abs(x2-x3);

    return 0;
}
