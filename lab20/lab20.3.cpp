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
    int k;
    cin >> k;
    
    int b[count], c[count];
    for (i=0; i<n; i++){
        while (a[i]==a[i+1]){
            con++; i++;
        }
        b[j]=con; c[j]=a[i];
        j++; con=1;
    }

    con=b[count-1]; b[count-1]=b[k]; b[k]=con;
    con=c[count-1]; c[count-1]=c[k]; c[k]=con;
    
    j=0; con=1;
    int arr[n];
    for (i=0; i<n; i++){
        arr[i]=c[j];
        con++;
        if (con>b[j]){
            con=1; j++;
        }
    }
    
    for (i=0; i<n; i++){
        cout << arr[i] << " ";
    }

}