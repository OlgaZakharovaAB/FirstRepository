#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, a, d, i;
    cin >> n >> a >> d;
    int m[n];
    for (i=0; i < n; i++){
        m[i] = a * pow(d, i);
        cout << m[i] << " ";
    }
}