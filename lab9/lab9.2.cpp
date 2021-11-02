#include <iostream>

using namespace std;

int main()
{
    string week [7] = {"Воскресенье", "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота"};
    int k;
    cin >> k;
    k = k%7;
    cout << week[k];
    return 0;
}
