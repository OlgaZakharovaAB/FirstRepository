#include <iostream>
#include <math.h>
using namespace std;
 
int main(){
    int n, i, i2, i3, p1, p2, p3;
    cin >> n;
    float a[n][2];
    
    for (i=0; i<n; i++){
        cin >> a[i][0] >> a[i][1];
    }
 
    float p, pmax=0;
 
    for (i=0; i<n; ++i)
        for (i2=i+1; i2<n; ++i2)
            for (i3=i2+1; i3<n; ++i3){
                p=0;
                p += sqrt(pow(a[i][0]-a[i2][0],2) + pow(a[i][1]-a[i2][1],2));
                p += sqrt(pow(a[i][0]-a[i3][0],2) + pow(a[i][1]-a[i3][1],2));
                p += sqrt(pow(a[i2][0]-a[i3][0],2) + pow(a[i2][1]-a[i3][1],2));
                if (p > pmax) {
                    p1=i;
                    p2=i2;
                    p3=i3;
                    pmax=p;
                }
            }
 
 
    cout << endl << pmax << endl;
    cout << a[p1][0] << " " << a[p1][1] << endl;
    cout << a[p2][0] << " " << a[p2][1] << endl;
    cout << a[p3][0] << " " << a[p3][1] << endl;
    return 0;
}