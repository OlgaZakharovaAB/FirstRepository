#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    float a[n];
    for (i = 0; i < n; i++){
        cin >> a[i];
    }
    for (i = 0; i < n - 1; i++){
        for (j = i + 1; j < n; j++){
            if (a[i] == a[j]){
                break;
            }
        }
        if (a[i] == a[j]){
                break;
        }
    }
    cout << i << " и " << j;
    
    return 0;
}
