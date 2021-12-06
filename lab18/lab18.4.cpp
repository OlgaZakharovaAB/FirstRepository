#include <iostream>
using namespace std;

int main()
{
    int n, i, mi, ma;
    float min=1000000000, max=-1000000000;
    cin >> n;
    float a[n];
    for (i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] < min){
            min = a[i]; mi = i;
        }
        if (a[i] > max){
            max = a[i]; ma = i;
        }
    }
    if (mi > ma){
        mi += ma;
        ma = mi - ma;
        mi = mi - ma;
    }
    
    for (i = mi + 1; i < ma; i++){
        a[i] = 0;
    }
    
    for (i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}
