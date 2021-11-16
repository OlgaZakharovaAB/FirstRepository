#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    int a, b, k, m;
    cin >> a >> b;
    k = abs(a-b);
    
    if (a<b){ 
        m=a;
    }
    else{ 
        m=b;
    }
    
    while ((m < k) and ((m>0) and (k>0))) {
        k = k - m;
        if (m > k){
            m = m+k;
            k = m-k;
            m = m-k;
        }
        if (m==k){
            break;
        }
    }
    cout << k;
    
    return 0;
}
