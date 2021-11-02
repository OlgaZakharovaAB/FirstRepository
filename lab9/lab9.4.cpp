#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((c > a) or (c > b)){
        cout << "0 " << a*b;
    }
    else{
        cout << (a/c)*(b/c) << ' ' << (a%c)*(b%c);
    }
    return 0;
}
