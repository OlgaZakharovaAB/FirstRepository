#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    double a, d=0;
    int n, j;
    cin >> a >> n;
    
    for (j=0; j<n+1; j++){
        d = d + pow(a, j);
    }
    cout << d;
    
    return 0;
}
