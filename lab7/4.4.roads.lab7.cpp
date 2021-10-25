#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double v1, v2, s, t, d, move;
    cout << "If cars move in 1 line, input 0. If they are on the crossroads, input 1: ";
    cin >> move;
    cout << "Input speed of cars 1 and 2: ";
    cin >> v1 >> v2;
    cout << endl << "Input distance between them: ";
    cin >> s;
    cout << endl << "Input time: ";
    cin >> t;
    if (move == 0){
        d = s + v1*t + v2*t;
    }
    else{
        d = s + sqrt(pow(v1*t, 2) + pow(v2*t, 2));
    }
    cout << "New distance between cars is " << d << "km";

    return 0;
}