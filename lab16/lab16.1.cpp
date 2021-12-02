#include <iostream>
using namespace std;

int main(){
    int i, j, n;
    cin >> n;
    int m[n];
    for (i=1, j=0; j<n, i<2*n; j++, i+=2){
        m[j]=i;
    }
    for (i=0; i<n; i++){
        cout << m[i] << " ";
    }
}