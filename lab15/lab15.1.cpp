#include <iostream>
using namespace std;

float PowerA3(float a, float b) {
	b = a * a * a;
	return b;
}

int main()
{
	float m[5];
	float n;
	int i;
	for (i = 0; i < 5; i++) {
		cin >> m[i];
		cout << PowerA3(m[i], n) << endl;
	}
}