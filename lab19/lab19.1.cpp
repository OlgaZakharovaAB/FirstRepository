#include <iostream>
using namespace std;

void move(int *&arr, int &size){
    int *newArr = new int[size];
    for (int i=0; i<size; i++){
        newArr[i]=arr[i];
    }
    delete[] arr;
    arr = newArr;
}

int main(){
    int n, i, k=0;
    cin >> n;
    int *array = new int[n];
    for (i=0; i<n; i++){
        cin >> array[i];
    }
    for (i=1; i<n; i++){
        if (array[k] != array[i]){
            k++;
            array[k]=array[i];
        }
    }
    k++;
    move(array, k);
    for (i=0; i<k; i++){
        cout << array[i] << " ";
    }
}
