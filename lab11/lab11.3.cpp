#include <iostream>
using namespace std;
#include <math.h>

int main() {
	setlocale(LC_ALL, "rus");
	double xa, ya, xb, yb, xc, yc, ab, ac;
	cout << "Введите координаты точки А, затем точек В и С: ";
	cin >> xa >> ya >> xb >> yb >> xc >> yc;
	ab = sqrt ( pow(xb-xa, 2) + pow(yb-ya, 2) );
	ac = sqrt ( pow(xc-xa, 2) + pow(yc-ya, 2) );
	if (ab < ac){
	    cout << "B, AB = " << ab;
	}
	else{
	    cout << "C, AC = " << ac;
	}
	return 0;
}
	