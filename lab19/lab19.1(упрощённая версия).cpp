#include <iostream>
using namespace std;

int main()
{
    int n, i, m, k=0;
    cin >> n;
    int *array = new int[n];
    cin >> array[0];
    for (i=1; i<n; i++){
        cin >> m;
        if (m != array[i-1]) {
            array[i]=m;
        }
        else {
            n--;
            i--;
        }
    }
    
    for (i=0; i<n; i++){
        cout << array[i] << " ";
    }
    return 0;
}
