#include <iostream>
using namespace std;
#include <math.h>

int main() {
	setlocale(LC_ALL, "rus");
	double x, y;
	cout << "Введите координаты точки: ";
	cin >> x >> y;
	if (x > 0){
	    if (y > 0){
	        cout << "Точка расположена в I четверти.";
	    }
	    else{
	        cout << "Точка расположена в IV четверти.";
	    }
	}
	else{
	    if (y > 0){
	        cout << "Точка расположена во II четверти.";
	    }
	    else{
	        cout << "Точка расположена в III четверти.";
	    }
	}
	return 0;
}
	