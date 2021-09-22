#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    cout << "Сумма: " << abs(a) + abs(b) << endl;
    cout << "Разность: " << abs(a) - abs(b) << endl;
    cout << "Произведение: " << abs(a) * abs(b) << endl;
    cout << "Частное: " << abs(a) / abs(b) << endl;

    return 0;
}
