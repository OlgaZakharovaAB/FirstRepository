#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int a, b;
	cin >> a >> b;
	if ( a == b ){
	    a = 0; b = 0;
	}
	else{
	    if ( a > b ){
	        b = a;
	    }
	    else{
	        a = b;
	    }
	}
	cout << a << ' ' << b;
	return 0;
}
	