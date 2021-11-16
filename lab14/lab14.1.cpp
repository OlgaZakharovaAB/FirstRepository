#include <iostream>
using namespace std;

int main()
{
    int a, b, i;
    cin >> a >> b;
    
    for (a; a<b+1; a++){
        for (i=0; i<a; i++){
            cout << a << " ";
        }
    }
    
    return 0;
}
