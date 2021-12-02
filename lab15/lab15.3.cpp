#include <iostream>
using namespace std;

float RingS(float a, float b) {
	float s1 = 3.14 * a*a;
	float s2 = 3.14 * b*b;
	return s1 - s2;
}

int main() {
	float r1, r2;
	int i;
	for (i = 0; i < 3; i++) {
		cin >> r1 >> r2;
		cout << RingS(r1, r2) << endl;
	}
}