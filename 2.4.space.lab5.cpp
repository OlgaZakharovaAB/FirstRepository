#include <iostream>
using namespace std;

int main() {
	int x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << "Периметр равен " << 2*((x2 - x1) + (y2 - y1)) << endl;
	cout << "Площадь равна " << (x2 - x1) * (y2 - y1);
	return 0;
}