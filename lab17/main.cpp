#include <iostream>
using namespace std;

int main()
{
    int k, l, n, i;
    float d;
    cin >> n >> k >> l;
    float m[n];
    for (i=0; i<n; i++){
        cin >> m[i];
    }
    n=0;
    for (i=k; i<l+1; i++){
        d+=m[i];
        n++;
    }
    
    cout << d/n;
    
    return 0;
}
