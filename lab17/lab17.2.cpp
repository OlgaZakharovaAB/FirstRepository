#include <iostream>
using namespace std;

int main()
{
    int flag=1, n, i;
    cin >> n;
    int m[n];
    for (i = 0; i < n; i++){
        cin >> m[i];
    }
    for (i =0; i < n - 2; i++){
        if ( (m[i + 1] - m[i]) != (m[i + 2] - m[i + 1]) ){
            flag = 0;
            break;
        }
    }
    if (flag == 1){
        flag = m[1] - m[0];
    }
    cout << flag;
    return 0;
}
