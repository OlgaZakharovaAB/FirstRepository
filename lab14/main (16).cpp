#include <iostream>
using namespace std;

int main()
{
    double x= 1000, p;
    int k=0;
    cin >> p;
    p = 1 + p/100;
    while (x*p < 1100){
        x=x*p;
        k++;
    }
    
    cout << x*p << " " << k+1;
    
    return 0;
}
