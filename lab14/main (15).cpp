#include <iostream>
using namespace std;

int main()
{
    int n, k=1, d=0;
    cin >> n;
    
    while (d<n){
        d=d+k;
        k++;
    }
    cout << k-1;
    
    return 0;
}
