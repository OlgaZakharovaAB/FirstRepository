#include <iostream>
using namespace std;

int main()
{
    int n, i, s=0;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] % 2 != 0){
            s=a[i];
        }
    }
    
    for (i = 0; i < n; i++){
        if (a[i] % 2 != 0){
            a[i] += s;
        }
    }
    
    for (i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}
