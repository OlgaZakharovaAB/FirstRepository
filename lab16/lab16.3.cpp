#include <iostream>
using namespace std;

int main(){
    int n, i, j;
    cin >> n;
    int m[n];
    cin >> m[0] >> m[1];
    for (i=2; i<n; i++){
        m[i]=0;
        for (j = i-1; j>-1; j--){
            m[i] = m[i] + m[j];
        }
    }

    for (i=0; i < n; i++){
        cout << m[i] << " ";
    }
}
