#include <iostream>
using namespace std;

int minn(int a, int b){
    if (a<b) return a;
    else return b;
}

int maxx(int a, int b){
    if (a>b) return a;
    else return b;
}

int main(){
    int n, i, mi, ma;
    float min=1000000000, max=-1000000000;
    cin >> n;
    float *array = new float[n];
    for (i=0; i<n; i++){
        cin >> array[i];
        if (array[i]<min) {
            min=array[i];
            mi=i;
        }
        if (array[i]>max){
            max=array[i];
            ma=i;
        }
    }
    cout << mi << " " << ma << endl;
    n+=2;
    
    float *newArr = new float[n];
    
    for (i=0; i < minn(mi, ma); i++) newArr[i]=array[i];
    if (mi == minn(mi, ma)){
        newArr[i]=0; newArr[i+1]=min;
    }
    else {
        newArr[i]=max; newArr[i+1]=0;
    }
    i+=2;
    
    for (i; i<maxx(mi, ma)+1; i++) newArr[i]=array[i-1];
    
    if (mi == maxx(mi, ma)){
        newArr[i]=0; newArr[i+1]=min;
    }
    else {
        newArr[i]=max; newArr[i+1]=0;
    }
    i+=2;
    
    if (n-i > 1){
        for (i; i<n; i++) newArr[i]=array[i-2];
    }
    
    delete [] array;
    array = newArr;
    
    for (i=0; i<n; i++){
        cout << array[i] << " ";
    }
}