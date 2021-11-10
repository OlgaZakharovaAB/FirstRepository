#include <iostream>
using namespace std;
#include <math.h>

int main() {
	setlocale(LC_ALL, "rus");
	int n, i; string c;
	string direction[4] { "Юг", "Восток", "Север", "Запад"};
	
	cout << "Введите исходное направление робота (например 'Север') и дальнейшее направление робота: ";
	cin >> c >> n;
	
	if ( (c == "Юг") and (n == -1) ){
	    c = "Запад";
	}
	else{
	    
	    for (i = 0; i < 4; i++) {
            if (direction[i] == c) {
                c = direction[i + n];
                break;
            }
        }
	    
	}
	cout << c;
	return 0;
}
	