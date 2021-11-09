#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int a, b, c;
	cin >> a >> b >> c;
	if ( (a < b+c) and (b < a+c) and (c < a+b) ){
	    cout << "Треугольник со сторонами " << a << ", " << b << " и " << c << " существует";
	}
	else{
	    cout << "Треугольник со сторонами " << a << ", " << b << " и " << c << " не существует";
	}
	return 0;
}
	