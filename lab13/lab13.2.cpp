#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    double i=1.1, d=1;
    int n, j;
    cin >> n;
    
    for (j=0; j<n; j++) {
        d = d*i;
        i=i+0.1;
    }
    cout << d;
    return 0;
}
