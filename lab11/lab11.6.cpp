#include <iostream>
using namespace std;
#include <math.h>

int main() {
	setlocale(LC_ALL, "rus");
	int a;
	cout << "Введите число от 1 до 999: ";
	cin >> a;
	
	if (a % 2 == 0){
	    cout << "Чётное ";
	}
	else{
	    cout << "Нечётное ";
	}
	
	if (a / 100 > 0){
	    cout << "трёхзначное число.";
	}
	else{
	    if (a / 10 > 0){
	        cout << "двузнaчное число.";
	    }
	    else {
	        cout << "однозначное число.";
	    }
	}
	return 0;
}
	