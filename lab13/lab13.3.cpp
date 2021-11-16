#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    int n, j, d=0;
    cin >> n;
    
    for (j=1; j<n*2; j=j+2) {
        d=d+j;
        cout << d << " ";
    }
    
    return 0;
}
