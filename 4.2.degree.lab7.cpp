#include <iostream>

using namespace std;

int main()
{
    double a, r;
    cout << "Вводите значение радиан с точностью до сотых (пример: 3.14):" << endl;
    cin >> r;
    a = r * 180 / 3.14;
    cout << a;

    return 0;
}
