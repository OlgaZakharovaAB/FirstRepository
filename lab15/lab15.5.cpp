#include <iostream>
using namespace std;

float Fact2(int n) {
		if (n < 2){
		    return 1;
		}
	return n * Fact2(n - 2);
}

int main() {
	int x, j;
	for (j = 0; j < 3; j++) {
		cin >> x;
		cout << Fact2(x) << endl;
	}
}