#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int a;
	cin >> a;
	if ( (a/1000 == a%10) and (a/100%10 == a%100/10) ){
	    cout << "Число " << a << " является палиндромом";
	}
	else{
	    cout << "Число " << a << " не является палиндромом";
	}
	return 0;
}
	