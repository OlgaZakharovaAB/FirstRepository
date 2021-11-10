#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int a[3], d;
	for (d = 0; d < 3; d++){
	    cin >> a[d];
	}
	if (a[0] < a[1]){
	    d = a[0]; a[0]=a[1]; a[1]=d;
	}
    if (a[1] < a[2]){
	    d = a[1]; a[1]=a[2]; a[2]=d;
	}
	cout << a[0]+a[1];
	return 0;
}
	