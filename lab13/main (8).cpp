#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    double x, w, price;
    
    cout << "Введите цену и вес конфет: ";
    cin >> x >> w;
    
    price = x*w;
    
    cout << price;
    
    return 0;
}
