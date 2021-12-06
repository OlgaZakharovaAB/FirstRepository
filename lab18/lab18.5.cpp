#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    float a[n], d;
    for (i = 0; i < n; i++){
        cin >> a[i];
    }
    i = 0;
    while ((a[i] > a[i + 1]) and (i < n - 1)){
        d = a[i];
        a[i] = a[i + 1];
        a[i + 1] = d;
        i++;
    }
    
    for (i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}
