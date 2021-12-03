#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float min=1000000000000;
    cin >> n;
    float a[n];
    for (i = 0; i < n; i++){
        cin >> a[i];
    }
    for (i = 0; i < n; i+=2){
        if (a[i]<min){
            min = a[i];
        }
    }
    cout << min;
    return 0;
}
