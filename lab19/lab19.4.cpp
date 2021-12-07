#include <iostream>
using namespace std;

int main()
{
    int n, i, k=0;
    cin >> n;
    int *array = new int[n];
    for (i=0; i<n; i++){
        cin >> array[i];
        if (array[i]<0){
            i++;
            n++;
            array[i]=0;
        }
    }
    
    for (i=0; i<n; i++){
        cout << array[i] << " ";
    }
    return 0;
}
