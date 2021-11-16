#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    int n, k1=1, k2=1, i=1;
    cin >> n;
    cout << "Отсчёт начала последовательности ведётся с 1, 1 и тд... 1 единица - 1 число. ";
    while (k1 < n){
        k1= k1 + k2;
        k2= k1 - k2;
        i++;
    }
    
    cout << endl << i+1;
    
    return 0;
}
