#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int a, b;
	cin >> a >> b;
	if ((a > 2) and (b <= 3)) {
		cout << "Высказывание 'Справедливо неравенство  " << a << " > 2 и " << b << " <= 3' истино";
	}
	else {
		cout << "Высказывание 'Справедливо неравенство  " << a << " > 2 и " << b << " <= 3' ложно";
	}
	return 0;
}