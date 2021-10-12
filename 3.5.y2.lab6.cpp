#include <iostream>

using namespace std;

int main()
{
    double x, y;
    cin >> x;
    x -= 3;
    x = x*x*x;
    y = 4*x*x - 7*x + 2;
    cout << y;
    
    return 0;
}