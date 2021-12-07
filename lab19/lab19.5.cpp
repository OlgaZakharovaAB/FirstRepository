#include <iostream>
using namespace std;

int main()
{
    int n, i, m;
    cin >> n;
    float *array = new float[n];
    for (i=0; i<n; i++){
        cin >> m;
        if (m>0){
            array[i]=0;
            i++;
            n++;
            array[i]=m;
        }
        else array[i]=m;
    }
    
    for (i=0; i<n; i++){
        cout << array[i] << " ";
    }
    return 0;
}
