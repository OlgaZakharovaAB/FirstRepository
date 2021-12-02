#include <iostream>
using namespace std;

int main(){
    int n, i;
    cin >> n;
    int a[n];
    for (i=0; i<n; i++){
        cin >> a[i];
    }
    
    for (i=1; i<n; i+=2){
        cout << a[i] << " ";
    }
    if (n%2==0){ i=n-2;}
    else { i=n-1;}
    
    for (i; i>=0; i-=2){
        cout << a[i] << " ";
    }
}