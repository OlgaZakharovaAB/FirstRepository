#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int a, b, c;
	cin >> a >> b >> c;
	if ((a < b) and (b < c)) {
		cout << "Выражение " << a << " < " << b << " < " << c << " истино";
	}
	else {
		cout << "Выражение " << a << " < " << b << " < " << c << " ложно";
	}
	return 0
}