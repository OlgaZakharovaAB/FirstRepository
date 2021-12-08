#include <iostream>
using namespace std;

int main()
{
    int n, i, j, c=0;
    cin >> n;
    float *array = new float[n];
    for (i=0; i<n; i++){
        cin >> array[i];
        if (array[i]>0) c++;
    }
    n+=c;
    float *newArr = new float[n];
    for (i=0, j=0; i<n, j<n-c; i++, j++){
        if (array[j]>0){
            newArr[i]=0;
            i++;
        }
        newArr[i]=array[j];
    }
    delete [] array;
    array = newArr;
    
    for (i=0; i<n; i++){
        cout << array[i] << " ";
    }
    return 0;
}