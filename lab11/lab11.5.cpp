#include <iostream>
using namespace std;
#include <math.h>

int main() {
	setlocale(LC_ALL, "rus");
	int a;
	cin >> a;
	if(a == 0){
	    cout << "Нулевое число";
	}
	else{
	    if (a > 0){
	        if (a % 2 == 0){
	            cout << "Положительное чётное число";
	        }
	        else{
	            cout << "Положительное нечётное число";
	        }
	    }
	    else{
	        if (a % 2 == 0){
	            cout << "Отрицательное чётное число";
	        }
	        else{
	            cout << "Отрицательное нечётное число";
	        }
	    }
	}
	return 0;
}
	