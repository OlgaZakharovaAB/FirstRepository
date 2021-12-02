#include <iostream>
using namespace std;

int SIN(float a) {
	if (a < 0) {
		return -1;
	}
	else {
		if (a == 0) {
			return 0;
		}
		else {
			return 1;
		}
	}
}

int main()
{
	float m, n;
	cin >> m >> n;
	cout << SIN(m) + SIN(n);
}