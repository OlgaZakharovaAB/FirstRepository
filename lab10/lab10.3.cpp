#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int a;
	cin >> a;
	if ((a % 2 == 0) and (a / 10 > 0) and (a / 10 < 10)) {
		cout << "Число " << a << " двузначное и чётное";
	}
	else {
		cout << "Число" << a << " не является и двузначным и чётным";
	}
	return 0;
}