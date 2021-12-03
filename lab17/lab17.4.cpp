#include <iostream>
using namespace std;

int main()
{
    int n, i, e = 0;
    cin >> n;
    float a[n];
    for (i = 0; i < n; i++){
        cin >> a[i];
    }
    for (i = 1; i < n - 1; i++){
        if ((a[i - 1]<a[i]) and (a[i]>a[i + 1])){
            e = i;
        }
    }
    if (a[n - 1]>a[n - 2]) {
        e = n - 1;
    }
    
    cout << e;
    return 0;
}
