#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, i, j, maxx=-1, x=0, y=0;
    cin >> n;
    float a[n][2];
    cout << "Вводите сперва х, затем у: " << endl;
    for (i=0; i<n; i++){
        for (j=0; j<2; j++){
            cin >> a[i][j];
        }
        if (a[i][0]<0 and a[i][1]>0){
            if ( abs(pow(a[i][0], 2) + pow(a[i][1], 2)) > maxx ){
                maxx=abs(pow(a[i][0], 2) + pow(a[i][1], 2)); x = a[i][0]; y=a[i][1];
            }
        }
    }
    cout << "(" << x << ", " << y << ")";

}