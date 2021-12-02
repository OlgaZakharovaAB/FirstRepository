#include <iostream>
using namespace std;

int Quarter(float x, float y) {
	if (x > 0) {
		if (y > 0) {
			return 1;
		}
		else {
			return 4;
		}
	}
	else {
		if (y > 0) {
			return 2;
		}
		else {
			return 3;
		}
	}
}

int main() {
	float x1, y1;
	int i;
	for (i = 0; i < 3; i++) {
		cin >> x1 >> y1;
		cout << Quarter(x1, y1) << endl;
	}
}