#include <iostream>
using namespace std;

void del(int *&arr, int &size){
    int *newArr = new int[size];
    for (int i=0; i<size; i++){
        newArr[i]=arr[i];
    }
    delete[] arr;
    arr = newArr;
}

int main(){
    int n, i, j, k, c;
    cin >> n;
    int *a = new int[n];
    for (i=0; i<n; i++){
        cin >> a[i];
    }
    
    for (i=0; i<n; i++){
        c=0;
        for (j = 0; j<n; j++) if (a[j]==a[i]) c++;
        
        if (c==2){
            k = i - 1;
            int buf=a[i];
            for (j=i; j<n; j++){
                if (a[j]!=buf){
                    k++;
                    a[k]=a[j];
                }
            }
            n -= 2;
            i--;
        }
    }
    
    del(a, n);
    for (i=0; i<n; i++){
        cout << a[i] << " ";
    }
}