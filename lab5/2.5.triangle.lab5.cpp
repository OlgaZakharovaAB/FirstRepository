#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int x1, x2, y1, y2, x3, y3, ab, bc, ca;
	float p;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	ab = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
	bc = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
	ca = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1));
	cout << "Периметр равен " << ab + bc + ca << endl;
	p = 0.5 * (ab + bc + ca);
	cout << "Площадь равна " << sqrt( p * (p - ab) * (p - bc) * (p - ca) );
	return 0;
}