#include <iostream>
using namespace std;

int main()
{
    int n, i, j=0, count=1, con=1;
    cin >> n;
    int a[n];
    for (i=0; i<n; i++){
        cin >> a[i];
        if (i!=0 and a[i]!=a[i-1]) count+=1;
    }
    int b[count], c[count];
    for (i=0; i<n-1; i++){
        while (a[i]==a[i+1]){
            con++; i++;
        }
        b[j]=con; c[j]=a[i];
        j++; con=1;
    }
    for (i=0; i<count; i++){
        cout << b[i] << " ";
    }
    cout << endl;
    for (i=0; i<count; i++){
        cout << c[i] << " ";
    }

    return 0;
}
