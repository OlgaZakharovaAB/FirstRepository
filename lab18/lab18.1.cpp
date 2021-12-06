#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float d;
    cin >> n;
    float a[n];
    float b[n];
    cout << "Введите сперва массив А, затем В: " << endl;
    for (i = 0; i < n; i++){
        cin >> a[i];
    }
    for (i = 0; i < n; i++){
        cin >> b[i];
    }
    
    for (i = 0; i < n; i++){
        d = a[i];
        a[i] = b[i];
        b[i] = d;
    }
    
    for (i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    for (i = 0; i < n; i++){
        cout << b[i] << " ";
    }

    return 0;
}
