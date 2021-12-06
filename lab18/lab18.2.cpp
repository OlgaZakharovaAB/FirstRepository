#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float s=0;
    cin >> n;
    float a[n];
    float b[n];
    for (i = 0; i < n; i++){
        cin >> a[i];
    }
    b[0] = a[0];
    for (i = 1; i<n; i++){
        s += a[i];
        b[i] = s/i;
    }
    
    for (i = 0; i < n; i++){
        cout << b[i] << " ";
    }

    return 0;
}
