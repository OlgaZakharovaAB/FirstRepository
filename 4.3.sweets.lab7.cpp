#include <iostream>

using namespace std;

int main()
{
    double cost, x, one, y;
    cout << "Input weight and its price:" << endl;
    cin >> x >> cost;
    one = cost/x;
    cout << "Input required weight:" << endl;
    cin >> y;
    cout << "1kg = " << one << "rub" << endl << y << "kg = " << one*y << "rub";

    return 0;
}
