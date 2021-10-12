#include <iostream>

using namespace std;

int main()
{
    double a1, a2, b1, b2, c1, c2, x, y, delta, deltaX, deltaY;
    cout << "Введите значения коэффициентов по очереди для каждого уравнения (в подядке х, у, после равно):" << endl;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    delta = a1*b2 - a2*b1;
    deltaX = c1*b2 - c2*b1;
    deltaY = a1*c2 - a2*c1;
    x = deltaX / delta;
    y = deltaY / delta;
    cout << "x = " << x << endl << "y = " << y;

    return 0;
}
