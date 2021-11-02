#include <iostream>

using namespace std;

int main()
{
    string week [7] = {"Воскресенье", "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота"};
    int k, n;
    cout << "Введите сперва номер дня недели 1 января, затем нужный день: ";
    cin >> n >> k;
    if (n == 0){
        n += 7;
    }
    k = k%7 + n - 1;
    cout << week[k];
    return 0;
}
